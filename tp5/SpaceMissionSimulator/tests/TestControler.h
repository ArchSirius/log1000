/*
 * File:   TestControler.h
 * Author: begooden
 *
 * Created on Nov 22, 2014, 8:17:29 PM
 */

#ifndef TESTCONTROLER_H
#define	TESTCONTROLER_H

#include <cppunit/extensions/HelperMacros.h>

class TestControler : public CPPUNIT_NS::TestFixture {
    CPPUNIT_TEST_SUITE(TestControler);

    CPPUNIT_TEST(testCreateSpaceObj_0);
    CPPUNIT_TEST(testCreateSpaceObj_1);

    CPPUNIT_TEST_SUITE_END();

public:
    TestControler();
    virtual ~TestControler();
    void setUp();
    void tearDown();

private:
    void testCreateSpaceObj_0();
    void testCreateSpaceObj_1();

};

#endif	/* TESTCONTROLER_H */

