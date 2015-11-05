/*
 * File:   ClientAccount.h
 * Author: pabone
 *
 * Created on 2014-11-18, 18:33:05
 */

#ifndef CLIENTACCOUNT_H
#define	CLIENTACCOUNT_H

#include <cppunit/extensions/HelperMacros.h>

class ClientAccount : public CPPUNIT_NS::TestFixture {
    CPPUNIT_TEST_SUITE(ClientAccount);

    CPPUNIT_TEST(testAddCredits);

    CPPUNIT_TEST_SUITE_END();

public:
    ClientAccount();
    virtual ~ClientAccount();
    void setUp();
    void tearDown();

private:
    void testAddCredits();

};

#endif	/* CLIENTACCOUNT_H */

