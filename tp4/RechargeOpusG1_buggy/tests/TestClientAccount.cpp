/*
 * File:   TestClientAccount.cpp
 * Author: begooden
 *
 * Created on Nov 9, 2014, 6:14:26 PM
 */

#include "TestClientAccount.h"
#include "../ClientAccount.h"


CPPUNIT_TEST_SUITE_REGISTRATION(TestClientAccount);

TestClientAccount::TestClientAccount() {
}

TestClientAccount::~TestClientAccount() {
}

void TestClientAccount::setUp() {
}

void TestClientAccount::tearDown() {
}

void TestClientAccount::testAddCredits() {
    unsigned int credits = 4;
    ClientAccount clientAccount = ClientAccount(0);
    clientAccount.addCredits(credits);
    if (true /*check result*/) {
        CPPUNIT_ASSERT(clientAccount.credits == 4);
    }
}

