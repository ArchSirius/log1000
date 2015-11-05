/*
 * File:   TestSpaceCraft.cpp
 * Author: begooden
 *
 * Created on Nov 22, 2014, 7:09:25 PM
 */
#include <vector>

#include "TestSpaceObject.h"
#include "../SpaceCraft.h"
#include "../Data.h"


CPPUNIT_TEST_SUITE_REGISTRATION(TestSpaceObject);

TestSpaceObject::TestSpaceObject() {
}

TestSpaceObject::~TestSpaceObject() {
}

void TestSpaceObject::setUp() {
}

void TestSpaceObject::tearDown() {
}

void TestSpaceObject::testGetPosVelAccVelKmh() {
    //SpaceCraft sc("lol");
    SpaceCraft sc("RangerSC");
    sc.setPosVelAcc({1.0,2.0,3.0},{4.0,5.0,6.0},{7.0,8.0,9.0});
    std::vector<Data3D> posVelAccKmhList = sc.getPosVelAccVelInKmh();
    Data3D pos = {1.0,2.0,3.0};
    Data3D vel = {4.0,5.0,6.0};
    Data3D acc = {7.0,8.0,9.0};
    Data3D velkmh = {14.4, 18.0, 21.6};
    CPPUNIT_ASSERT(posVelAccKmhList[0]==pos);
    CPPUNIT_ASSERT(posVelAccKmhList[1]==vel);
    CPPUNIT_ASSERT(posVelAccKmhList[2]==acc);
    CPPUNIT_ASSERT(posVelAccKmhList[3]==velkmh);
    CPPUNIT_ASSERT(sc.getID()=="RangerSC");
}

void TestSpaceObject::testSetPosVelAcc() {
    Data3D pos = {1.0,2.0,3.0};
    Data3D vel = {4.0,5.0,6.0};
    Data3D acc = {7.0,8.0,9.0};
    SpaceCraft spaceCraft("RangerSC");
    spaceCraft.setPosVelAcc(pos, vel, acc);
    std::vector<Data3D> posVelAccList = spaceCraft.getPosVelAccVelInKmh();
    CPPUNIT_ASSERT(posVelAccList[0]==pos);
    CPPUNIT_ASSERT(posVelAccList[1]==vel);
    CPPUNIT_ASSERT(posVelAccList[2]==acc);
    CPPUNIT_ASSERT(spaceCraft.getID()=="RangerSC");
}



