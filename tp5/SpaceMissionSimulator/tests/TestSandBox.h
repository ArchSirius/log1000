/*
 * File:   TestSandBox.h
 * Author: begooden
 *
 * Created on Nov 22, 2014, 8:09:45 PM
 */

#ifndef TESTSANDBOX_H
#define	TESTSANDBOX_H

#include <cppunit/extensions/HelperMacros.h>

class TestSandBox : public CPPUNIT_NS::TestFixture {
    CPPUNIT_TEST_SUITE(TestSandBox);

    CPPUNIT_TEST(testAddSpaceCraft);
    CPPUNIT_TEST(testWantSpaceCraftIds);

    CPPUNIT_TEST_SUITE_END();

public:
    TestSandBox();
    virtual ~TestSandBox();
    void setUp();
    void tearDown();

private:
    void testAddSpaceCraft();
    void testWantSpaceCraftIds();

};

#endif	/* TESTSANDBOX_H */

