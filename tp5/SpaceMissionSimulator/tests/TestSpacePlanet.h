/*
 * File:   TestSpacePlanet.h
 * Author: begooden
 *
 * Created on Nov 22, 2014, 6:38:08 PM
 */

#ifndef TESTSPACEPLANET_H
#define	TESTSPACEPLANET_H

#include <cppunit/extensions/HelperMacros.h>

class TestSpacePlanet : public CPPUNIT_NS::TestFixture {
    CPPUNIT_TEST_SUITE(TestSpacePlanet);

    CPPUNIT_TEST(testGetPosVelAcc);
    CPPUNIT_TEST(testSetPosVelAcc);

    CPPUNIT_TEST_SUITE_END();

public:
    TestSpacePlanet();
    virtual ~TestSpacePlanet();
    void setUp();
    void tearDown();

private:
    void testGetPosVelAcc();
    void testSetPosVelAcc();

};

#endif	/* TESTSPACEPLANET_H */

