/*
 * File:   TestOpusController.cpp
 * Author: pabone
 *
 * Created on 2014-11-19, 18:06:15
 */

#include "TestOpusController.h"
#include "../OpusControler.h"


CPPUNIT_TEST_SUITE_REGISTRATION(TestOpusController);

TestOpusController::TestOpusController() {
}

TestOpusController::~TestOpusController() {
}

void TestOpusController::setUp() {
}

void TestOpusController::tearDown() {
}

void TestOpusController::testAddCreditsNoBankCredentials() {
    BankCredentials bankCredentials("noexist","5555");
    std::string clientId = "1234";
    unsigned int credits = 23;
    OpusControler opusControler(3.0,"../accounts/","../notifier/");
    bool result = opusControler.addCredits(bankCredentials, clientId, credits);
    if (true /*check result*/) {
        CPPUNIT_ASSERT(!result);
    }
}
void TestOpusController::testAddCreditsNoClientID() {
    BankCredentials bankCredentials("stm","1234");
    std::string clientId = "4321";
    unsigned int credits = 34;
    OpusControler opusControler(3.0,"../accounts/","../notifier/");
    bool result = opusControler.addCredits(bankCredentials, clientId, credits);
    if (true /*check result*/) {
        CPPUNIT_ASSERT(!result);
    }
}
void TestOpusController::testAddCreditsNotEnough() {
    BankCredentials bankCredentials("stm","1234");
    std::string clientId = "1234";
    unsigned int credits = 70;
    OpusControler opusControler(3.0,"accounts/","notifier/");
    bool result = opusControler.addCredits(bankCredentials, clientId, credits);
    if (true /*check result*/) {
        CPPUNIT_ASSERT(!result);
    }
}

void TestOpusController::testAddCredits() {
    BankCredentials bankCredentials("stm","1234");
    std::string clientId = "1234";
    unsigned int credits = 4;
    OpusControler opusControler(3.0,"accounts/","notifier/");
    bool result = opusControler.addCredits(bankCredentials, clientId, credits);
    if (true /*check result*/) {
        CPPUNIT_ASSERT(result);
    }
}

void TestOpusController::testListAccountsNoExistFile() {
    std::vector<std::string> accounts;
    OpusControler opusControler (3.0,"notaccounts/","notifier/");
    int result = opusControler.listAccounts(accounts);
    if (true ) {
        CPPUNIT_ASSERT(result != 0);
    }
}

void TestOpusController::testListAccounts() {
    std::vector<std::string> accounts;
    OpusControler opusControler(3.0,"accounts/","notifier/");
    int result = opusControler.listAccounts(accounts);
    if (true ) {
        CPPUNIT_ASSERT(result == 0);
    }
}


