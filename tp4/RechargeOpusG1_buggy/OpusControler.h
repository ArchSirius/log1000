/* 
 * File:   OpusControler.h
 * Author: begooden
 *
 * Created on November 9, 2014, 7:36 AM
 */

#ifndef OPUSCONTROLER_H
#define	OPUSCONTROLER_H

#include "BankCredentials.h"
#include "ClientAccount.h"
#include "Notifier.h"

#include <string>
#include <vector>

class OpusControler {
public:
    OpusControler(float creditPrice, std::string serverUrl, std::string notifierUrl);
    OpusControler(const OpusControler& orig);
    virtual ~OpusControler();
    
    bool addCredits(BankCredentials& bankCredentials, std::string clientId, unsigned int credits);
    int listAccounts(std::vector<std::string>& accounts);
    
private:
    float creditPrice;
    std::string serverUrl;
    Notifier notifier;// = Notifier("lol");
    
    bool getAccount(std::string id, ClientAccount& ca);
    void updateAccount(std::string id, ClientAccount& ca);

};

#endif	/* OPUSCONTROLER_H */

