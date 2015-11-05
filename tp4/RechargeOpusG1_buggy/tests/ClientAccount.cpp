/*
 * File:   ClientAccount.cpp
 * Author: pabone
 *
 * Created on 2014-11-18, 18:33:05
 */

#include "ClientAccount.h"
#include "ClientAccount.h"


CPPUNIT_TEST_SUITE_REGISTRATION(ClientAccount);

ClientAccount::ClientAccount() {
}

ClientAccount::~ClientAccount() {
}

void ClientAccount::setUp() {
}

void ClientAccount::tearDown() {
}

void ClientAccount::testAddCredits() {
    unsigned int credits;
    ClientAccount clientAccount;
    clientAccount.addCredits(credits);
    if (true /*check result*/) {
        CPPUNIT_ASSERT(false);
    }
}

