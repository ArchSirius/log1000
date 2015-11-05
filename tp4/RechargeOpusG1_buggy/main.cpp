/* 
 * File:   main.cpp
 * Author: begooden
 *
 * Created on November 8, 2014, 12:57 PM
 */

#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>

#include "OpusControler.h"
#include "BankCredentials.h"


int main(int argc, char** argv) {
    OpusControler oc = OpusControler(3.0, "accounts/", "notifier/");
    //oc.createAccount("paulin", 0);
    
    
    BankCredentials bc = BankCredentials("paulin", "1234");
    oc.addCredits(bc, "1234", 4);
    std::vector<std::string> accounts;
    int errno = oc.listAccounts(accounts);
    std::cout << std::endl << "Accounts are:" << std::endl;
    for(int i=0; i<accounts.size(); i++)
    {
        std::cout << accounts[i] << std::endl;
    }
    return 0;
}

