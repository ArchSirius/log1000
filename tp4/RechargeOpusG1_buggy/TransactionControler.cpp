/* 
 * File:   TransactionControler.cpp
 * Author: begooden
 * 
 * Created on November 9, 2014, 10:51 AM
 */

#include "TransactionControler.h"

TransactionControler::TransactionControler(){
    this->mcisBankTC = McisBankTC(); 
}

TransactionControler::TransactionControler(const TransactionControler& orig) {
}

TransactionControler::~TransactionControler() {
}

bool TransactionControler::transfertFunds(BankCredentials& bc, float amount){
    BankCredentials ourBankCredentials = BankCredentials("stm","1234");
    return this->mcisBankTC.transfertFunds(ourBankCredentials, bc, amount);
}

