/*
 * File:   TestSpaceObjectFactory.h
 * Author: begooden
 *
 * Created on Nov 22, 2014, 7:58:02 PM
 */

#ifndef TESTSPACEOBJECTFACTORY_H
#define	TESTSPACEOBJECTFACTORY_H

#include <cppunit/extensions/HelperMacros.h>

class TestSpaceObjectFactory : public CPPUNIT_NS::TestFixture {
    CPPUNIT_TEST_SUITE(TestSpaceObjectFactory);

    CPPUNIT_TEST(testCreateSpaceCraft);

    CPPUNIT_TEST_SUITE_END();

public:
    TestSpaceObjectFactory();
    virtual ~TestSpaceObjectFactory();
    void setUp();
    void tearDown();

private:
    void testCreateSpaceCraft();

};

#endif	/* TESTSPACEOBJECTFACTORY_H */

