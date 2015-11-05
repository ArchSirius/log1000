/* 
 * File:   BankCredentials.cpp
 * Author: begooden
 * 
 * Created on November 9, 2014, 7:40 AM
 */

#include "BankCredentials.h"

BankCredentials::BankCredentials(std::string accountId, std::string nip):accountId(accountId), nip(nip) {
    //this->accountId = accountId;
    //this->nip = nip;
}

BankCredentials::BankCredentials(const BankCredentials& orig) {
}

BankCredentials::~BankCredentials() {
}
/*
std::ostream& operator<<(std::ostream& os, const BankCredentials& bc){
    os << bc.accountId;
    os << bc.nip;
    return os;
}
std::istream& operator>>(std::istream& is, BankCredentials& bc){
    is >> bc.accountId >> bc.nip;
    return is;
}
*/