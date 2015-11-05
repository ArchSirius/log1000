/* 
 * File:   ClientAccount.h
 * Author: begooden
 *
 * Created on November 9, 2014, 8:52 AM
 */

#ifndef CLIENTACCOUNT_H
#define	CLIENTACCOUNT_H

#include <string>
#include <iostream>

class ClientAccount {
public:
    unsigned int credits;
    
    ClientAccount();
    ClientAccount(unsigned int credits);
    ClientAccount(const ClientAccount& orig);
    virtual ~ClientAccount();
    
    void addCredits(unsigned int credits);
private:
    //std::string id;
    //uint credits;
};
std::ostream& operator<<(std::ostream& os, const ClientAccount& ca);
std::istream& operator>>(std::istream& is, ClientAccount& ca);

#endif	/* CLIENTACCOUNT_H */

