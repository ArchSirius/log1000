/* 
 * File:   OpusControler.cpp
 * Author: begooden
 * 
 * Created on November 9, 2014, 7:36 AM
 */

#include "OpusControler.h"
#include "TransactionControler.h"

#include <sys/types.h>
#include <dirent.h>
#include <errno.h>

#include <fstream>
#include <iostream>
#include <sstream>
#include <vector>

OpusControler::OpusControler(float creditPrice, std::string serverUrl, std::string notifierUrl):creditPrice(creditPrice), serverUrl(serverUrl), notifier(Notifier(notifierUrl)) {

}

OpusControler::OpusControler(const OpusControler& orig) {
}

OpusControler::~OpusControler() {
}

bool OpusControler::addCredits(BankCredentials& bankCredentials, std::string clientId, unsigned int credits){
    float price = (float)credits * this->creditPrice;
    TransactionControler tc = TransactionControler();
    bool isTransfert = tc.transfertFunds(bankCredentials, price);
    if(!isTransfert){
        this->notifier.print("\nCould not buy the credits :(");
        return false;
    }
    ClientAccount ca = ClientAccount();
    bool isAccount = this->getAccount(clientId, ca);
    if(!isAccount){
        //TO DO: Un message pertinent
        this->notifier.print("\nError: No account Found");
        return false;
    }
    ca.addCredits(credits);
    this->updateAccount(clientId, ca);
    std::stringstream ss;
   // int dispCredits;
    ss << "You successfully bought: " << credits << " credits";
    this->notifier.print(ss.str());
    return true;
}

int OpusControler::listAccounts(std::vector<std::string>& accounts){
    DIR *dp;
    struct dirent *dirp;
    if((dp = opendir(this->serverUrl.data())) == NULL) {
        std::cout << "Error(" << errno << ") opening " << this->serverUrl << std::endl;
        return errno;
    }
    std::string banchars [2] = {".", "~"};
    for(int i=0; i<2; i++){
       // i=1;
        while((dirp = readdir(dp)) != NULL) {
      //      break;
            std::string d_name = dirp->d_name;
            std::size_t found = d_name.find(banchars[i]);
            if(found == std::string::npos && d_name.size()==4)
                accounts.push_back(d_name);
        }
    }
    closedir(dp);
    return 0;

}

void OpusControler::updateAccount(std::string id, ClientAccount& ca){
    std::ofstream ofs((this->serverUrl+id).data());
    ofs << ca; // store the object to file
    ofs.close();
}

bool OpusControler::getAccount(std::string id, ClientAccount& ca){
    std::ifstream ifs((this->serverUrl+id).data());
    if(!(ifs >> ca))
    {
        return false;
    }
    return true;
}


