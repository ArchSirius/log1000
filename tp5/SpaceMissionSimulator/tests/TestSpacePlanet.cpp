/*
 * File:   TestSpacePlanet.cpp
 * Author: begooden
 *
 * Created on Nov 22, 2014, 6:38:09 PM
 */

#include <vector>

#include "TestSpacePlanet.h"
#include "../SpacePlanet.h"
#include "../Data.h"


CPPUNIT_TEST_SUITE_REGISTRATION(TestSpacePlanet);

TestSpacePlanet::TestSpacePlanet() {
}

TestSpacePlanet::~TestSpacePlanet() {
}

void TestSpacePlanet::setUp() {
    
}

void TestSpacePlanet::tearDown() {
}

void TestSpacePlanet::testGetPosVelAcc() {
    SpacePlanet spacePlanet("AlphaPlanet");
    spacePlanet.setPosVelAcc({1.0,2.0,3.0},{1.0,2.0,3.0},{1.0,2.0,3.0});
    std::vector<Data3D> posVelAccList = spacePlanet.getPosVelAcc();
    CPPUNIT_ASSERT(posVelAccList[0]=={1.0,2.0,3.0});
    CPPUNIT_ASSERT(posVelAccList[1]=={1.0,2.0,3.0});
    CPPUNIT_ASSERT(posVelAccList[1]=={1.0,2.0,3.0});

}

void TestSpacePlanet::testSetPosVelAcc() {
    /*
    const Data3D& position;
    const Data3D& velocity;
    const Data3D& acceleration;
    SpacePlanet spacePlanet;
    spacePlanet.setPosVelAcc(position, velocity, acceleration);
    */
    CPPUNIT_ASSERT(true);
}

