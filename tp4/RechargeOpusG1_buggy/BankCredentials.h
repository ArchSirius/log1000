/* 
 * File:   BankCredentials.h
 * Author: begooden
 *
 * Created on November 9, 2014, 7:40 AM
 */

#ifndef BANKCREDENTIALS_H
#define	BANKCREDENTIALS_H

#include<string>

/*
 * Structure de donnees contenant les information pour effectuer une transaction bancaire
 */
class BankCredentials {
public:
    std::string accountId;
    std::string nip;
    
    BankCredentials(std::string accountId, std::string nip);
    BankCredentials(const BankCredentials& orig);
    virtual ~BankCredentials();
    

private:

};

#endif	/* BANKCREDENTIALS_H */

