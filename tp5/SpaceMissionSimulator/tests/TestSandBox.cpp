/*
 * File:   TestSandBox.cpp
 * Author: begooden
 *
 * Created on Nov 22, 2014, 8:09:45 PM
 */

#include <string>
#include <vector>

#include "TestSandBox.h"
#include "../SandBox.h"
#include "../SpaceObjectFactory.h"
#include "../SpaceCraft.h"

CPPUNIT_TEST_SUITE_REGISTRATION(TestSandBox);

TestSandBox::TestSandBox() {
}

TestSandBox::~TestSandBox() {
}

void TestSandBox::setUp() {
}

void TestSandBox::tearDown() {
}

void TestSandBox::testAddSpaceCraft() {
    SpaceObjectFactory sof;
    Data3D pos = {1.0,2.0,3.0};
    Data3D vel = {4.0,5.0,6.0};
    Data3D acc = {7.0,8.0,9.0};
    SpaceCraft sc = sof.createSpaceCraft("RangerSC", pos, vel, acc);
    SandBox sandBox;
    sandBox.addSpaceCraft(sc);
    std::vector<std::string> ids = sandBox.wantSpaceCraftIds();
    
    CPPUNIT_ASSERT(ids[0] == "RangerSC");

}

void TestSandBox::testWantSpaceCraftIds() {
    SpaceObjectFactory sof;
    Data3D pos = {1.0,2.0,3.0};
    Data3D vel = {4.0,5.0,6.0};
    Data3D acc = {7.0,8.0,9.0};
    SpaceCraft sc = sof.createSpaceCraft("RangerSC", pos, vel, acc);
    SandBox sandBox;
    sandBox.addSpaceCraft(sc);
    std::vector<std::string> ids = sandBox.wantSpaceCraftIds();
    
    CPPUNIT_ASSERT(ids[0] == "RangerSC");
}

