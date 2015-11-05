/*
 * File:   TestSpaceObjectFactory.cpp
 * Author: begooden
 *
 * Created on Nov 22, 2014, 7:58:02 PM
 */

#include "TestSpaceObjectFactory.h"
#include "../SpaceObjectFactory.h"


CPPUNIT_TEST_SUITE_REGISTRATION(TestSpaceObjectFactory);

TestSpaceObjectFactory::TestSpaceObjectFactory() {
}

TestSpaceObjectFactory::~TestSpaceObjectFactory() {
}

void TestSpaceObjectFactory::setUp() {
}

void TestSpaceObjectFactory::tearDown() {
}

void TestSpaceObjectFactory::testCreateSpaceCraft() {
        //SpaceCraft sc("lol");
    SpaceObjectFactory spaceObjectFactory;
    Data3D pos = {1.0,2.0,3.0};
    Data3D vel = {4.0,5.0,6.0};
    Data3D acc = {7.0,8.0,9.0};
    SpaceCraft sc = spaceObjectFactory.createSpaceCraft("RangerSC", pos, vel, acc);
    std::vector<Data3D> posVelAccList = sc.getPosVelAccVelInKmh();
    CPPUNIT_ASSERT(posVelAccList[0]==pos);
    CPPUNIT_ASSERT(posVelAccList[1]==vel);
    CPPUNIT_ASSERT(posVelAccList[2]==acc);
    CPPUNIT_ASSERT(sc.getID()=="RangerSC");
}

