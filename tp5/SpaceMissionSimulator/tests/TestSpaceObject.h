/*
 * File:   TestSpaceCraft.h
 * Author: begooden
 *
 * Created on Nov 22, 2014, 7:09:25 PM
 */

#ifndef TESTSPACECRAFT_H
#define	TESTSPACECRAFT_H

#include <cppunit/extensions/HelperMacros.h>

class TestSpaceObject : public CPPUNIT_NS::TestFixture {
    CPPUNIT_TEST_SUITE(TestSpaceObject);

    CPPUNIT_TEST(testGetPosVelAccVelKmh);
    CPPUNIT_TEST(testSetPosVelAcc);
    

    CPPUNIT_TEST_SUITE_END();

public:
    TestSpaceObject();
    virtual ~TestSpaceObject();
    void setUp();
    void tearDown();

private:
    
    void testGetPosVelAccVelKmh();
    void testSetPosVelAcc();

};

#endif	/* TESTSPACECRAFT_H */

