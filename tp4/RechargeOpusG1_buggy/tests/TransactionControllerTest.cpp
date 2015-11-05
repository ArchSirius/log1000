/*
 * File:   TransactionControllerTest.cpp
 * Author: pabone
 *
 * Created on 2014-11-18, 20:01:01
 */

#include "TransactionControllerTest.h"
#include "../TransactionControler.h"


CPPUNIT_TEST_SUITE_REGISTRATION(TransactionControllerTest);

TransactionControllerTest::TransactionControllerTest() {
}

TransactionControllerTest::~TransactionControllerTest() {
}

void TransactionControllerTest::setUp() {
}

void TransactionControllerTest::tearDown() {
}

void TransactionControllerTest::testTransfertFunds() {
    BankCredentials bc("Ginette","5555");
    float amount;
    TransactionControler transactionControler;
    bool result = transactionControler.transfertFunds(bc, amount);
    if (true /*check result*/) {
        CPPUNIT_ASSERT(!result);
    }
}

void TransactionControllerTest::testTransfertFundsBalanceSmall() {
    BankCredentials bc("stm","1234");
    float amount = 50.0;
    TransactionControler transactionControler;
    bool result = transactionControler.transfertFunds(bc, amount);
    if (true /*check result*/) {
        CPPUNIT_ASSERT(!result);
    }
}

void TransactionControllerTest::testTransfertFundsBalanceGood() {
    BankCredentials bc("stm","1234");
    float amount = 30.0;
    TransactionControler transactionControler;
    bool result = transactionControler.transfertFunds(bc, amount);
    if (true /*check result*/) {
        CPPUNIT_ASSERT(result);
    }
}
