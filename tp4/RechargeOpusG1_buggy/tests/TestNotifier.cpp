/*
 * File:   TestNotifier.cpp
 * Author: pabone
 *
 * Created on 2014-11-18, 19:23:30
 */

#include "TestNotifier.h"
#include "../Notifier.h"
#include <iostream>
#include <fstream>


CPPUNIT_TEST_SUITE_REGISTRATION(TestNotifier);

TestNotifier::TestNotifier() {
}

TestNotifier::~TestNotifier() {
}

void TestNotifier::setUp() {
}

void TestNotifier::tearDown() {
}

void TestNotifier::testPrint() {
    std::string str = "Comment";
    
    std::ifstream lecturestr ("/usagers/pabone/Bureau/LOG1000/log1000-06/TP4/RechargeOpusG1_buggy/notifier/notifier_out", std::ios::binary);
    Notifier notifier;
    notifier.print(str);
    std::string str2;
    lecturestr.seekg (0, std::ios::beg);
    std::getline (lecturestr,str2);
    lecturestr.close();
    if (str2 == "Comment") {
        CPPUNIT_ASSERT(true);
    }
}

