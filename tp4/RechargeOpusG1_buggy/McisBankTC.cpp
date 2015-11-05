/* 
 * File:   McisBankTC.cpp
 * Author: begooden
 * 
 * Created on November 9, 2014, 10:56 AM
 */

#include "McisBankTC.h"
#include "McisBankAccount.h"

#include <fstream>
#include <iostream>

McisBankTC::McisBankTC() {
}


McisBankTC::McisBankTC(const McisBankTC& orig) {
}

McisBankTC::~McisBankTC() {
}

bool McisBankTC::transfertFunds(BankCredentials& merchandBankCred, BankCredentials& clientBankCred, float amount){
    std::ifstream ifs1(("mcisbank/"+clientBankCred.accountId).data());
    McisBankAccount clientMba = McisBankAccount();
    if(!(ifs1 >> clientMba))
    {
        return false;
    }
    std::ifstream ifs2(("mcisbank/"+merchandBankCred.accountId).data());
    McisBankAccount merchandMba = McisBankAccount();
    if(!(ifs2 >> merchandMba))
    {
        return false;
    }
    if(clientMba.balance < amount)
        return false;
    
    //merchandMba.balance = amount + merchandMba.balance;
    return true;
}


 