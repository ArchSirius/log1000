/*
 * File:   TestNotifier.h
 * Author: pabone
 *
 * Created on 2014-11-18, 19:23:30
 */

#ifndef TESTNOTIFIER_H
#define	TESTNOTIFIER_H

#include <cppunit/extensions/HelperMacros.h>

class TestNotifier : public CPPUNIT_NS::TestFixture {
    CPPUNIT_TEST_SUITE(TestNotifier);

    CPPUNIT_TEST(testPrint);

    CPPUNIT_TEST_SUITE_END();

public:
    TestNotifier();
    virtual ~TestNotifier();
    void setUp();
    void tearDown();

private:
    void testPrint();

};

#endif	/* TESTNOTIFIER_H */

