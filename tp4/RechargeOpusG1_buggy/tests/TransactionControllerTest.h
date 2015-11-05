/*
 * File:   TransactionControllerTest.h
 * Author: pabone
 *
 * Created on 2014-11-18, 20:01:01
 */

#ifndef TRANSACTIONCONTROLLERTEST_H
#define	TRANSACTIONCONTROLLERTEST_H

#include <cppunit/extensions/HelperMacros.h>

class TransactionControllerTest : public CPPUNIT_NS::TestFixture {
    CPPUNIT_TEST_SUITE(TransactionControllerTest);

    CPPUNIT_TEST(testTransfertFunds);
    CPPUNIT_TEST(testTransfertFundsBalanceSmall);
    CPPUNIT_TEST(testTransfertFundsBalanceGood);

    CPPUNIT_TEST_SUITE_END();

public:
    TransactionControllerTest();
    virtual ~TransactionControllerTest();
    void setUp();
    void tearDown();

private:
    void testTransfertFunds();
    void testTransfertFundsBalanceSmall();
    void testTransfertFundsBalanceGood();

};

#endif	/* TRANSACTIONCONTROLLERTEST_H */

