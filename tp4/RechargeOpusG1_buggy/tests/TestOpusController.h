/*
 * File:   TestOpusController.h
 * Author: pabone
 *
 * Created on 2014-11-19, 18:06:14
 */

#ifndef TESTOPUSCONTROLLER_H
#define	TESTOPUSCONTROLLER_H

#include <cppunit/extensions/HelperMacros.h>

class TestOpusController : public CPPUNIT_NS::TestFixture {
    CPPUNIT_TEST_SUITE(TestOpusController);

    CPPUNIT_TEST(testAddCreditsNoBankCredentials);
    CPPUNIT_TEST(testAddCreditsNoClientID);
    CPPUNIT_TEST(testAddCredits);
    CPPUNIT_TEST(testAddCreditsNotEnough);
    
    CPPUNIT_TEST(testListAccounts);
    CPPUNIT_TEST(testListAccountsNoExistFile);
    

    CPPUNIT_TEST_SUITE_END();

public:
    TestOpusController();
    virtual ~TestOpusController();
    void setUp();
    void tearDown();

private:
    void testAddCredits();
    void testAddCreditsNoClientID();
    void testAddCreditsNoBankCredentials();
    void testAddCreditsNotEnough();
    void testListAccounts();
    void testListAccountsNoExistFile();

};

#endif	/* TESTOPUSCONTROLLER_H */

