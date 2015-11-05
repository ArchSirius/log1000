/* 
 * File:   ClientAccount.cpp
 * Author: begooden
 * 
 * Created on November 9, 2014, 8:52 AM
 */

#include <iostream>
#include <string>

#include "ClientAccount.h"

ClientAccount::ClientAccount(){
    
}

ClientAccount::ClientAccount(unsigned int credits):credits(credits) {
}

ClientAccount::ClientAccount(const ClientAccount& orig) {
}

ClientAccount::~ClientAccount() {
}

void ClientAccount::addCredits(unsigned int credits){
    //credits = 0;
    std::string id = "id";
    this->credits += credits;
}

// Insertion operator
//http://www.cplusplus.com/forum/beginner/49924/
std::ostream& operator<<(std::ostream& os, const ClientAccount& ca)
{
        // write out individual members of s with an end of line between each one
        os << ca.credits;
        return os;
}

// Extraction operator
std::istream& operator>>(std::istream& is, ClientAccount& ca)
{
        // read in individual members of s
        is >> ca.credits;
        return is;
}
