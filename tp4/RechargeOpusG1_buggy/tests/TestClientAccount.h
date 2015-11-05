/*
 * File:   TestClientAccount.h
 * Author: begooden
 *
 * Created on Nov 9, 2014, 6:14:26 PM
 */

#ifndef TESTCLIENTACCOUNT_H
#define	TESTCLIENTACCOUNT_H

#include <cppunit/extensions/HelperMacros.h>

class TestClientAccount : public CPPUNIT_NS::TestFixture {
    CPPUNIT_TEST_SUITE(TestClientAccount);

    CPPUNIT_TEST(testAddCredits);

    CPPUNIT_TEST_SUITE_END();

public:
    TestClientAccount();
    virtual ~TestClientAccount();
    void setUp();
    void tearDown();

private:
    void testAddCredits();

};

#endif	/* TESTCLIENTACCOUNT_H */

