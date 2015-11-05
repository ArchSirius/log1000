/*
 * File:   TestControler.cpp
 * Author: begooden
 *
 * Created on Nov 22, 2014, 8:17:29 PM
 */

#include "TestControler.h"
#include "../Controler.h"


CPPUNIT_TEST_SUITE_REGISTRATION(TestControler);

TestControler::TestControler() {
}

TestControler::~TestControler() {
}

void TestControler::setUp() {
}

void TestControler::tearDown() {
}

void TestControler::testCreateSpaceObj_0() {
    
    const std::string& id = "Ranger SpaceCraft";
    int type = Controller::SpaceCraftType;
    const Data3D& pos = {0.0, 0.0, 0.0};
    const Data3D& vel = {0.0, 0.0, 0.0} ;
    const Data3D& acc = {0.0, 0.0, 0.0};
    Controller controller;
    controller.createSpaceObj(id, type, pos, vel, acc);
    CPPUNIT_ASSERT(true);                         
}

void TestControler::testCreateSpaceObj_1() {
    
    const std::string& id = "Alpha Planet";
    int type = Controller::SpacePlanetType;
    const Data3D& pos = {0.0, 0.0, 0.0};
    const Data3D& vel = {0.0, 0.0, 0.0};
    const Data3D& acc = {0.0, 0.0, 0.0};
    Controller controller;
    controller.createSpaceObj(id, type, pos, vel, acc);
    CPPUNIT_ASSERT(true);                         
}

