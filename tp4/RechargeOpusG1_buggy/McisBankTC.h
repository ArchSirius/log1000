/* 
 * File:   McisBankTC.h
 * Author: begooden
 *
 * Created on November 9, 2014, 10:56 AM
 */

#ifndef MCISBANKTC_H
#define	MCISBANKTC_H

#include <string>
#include <iostream>

#include "BankCredentials.h"

class McisBankTC {
public:
    McisBankTC();
    McisBankTC(const McisBankTC& orig);
    virtual ~McisBankTC();
    
    bool transfertFunds(BankCredentials& merchandBankCred, BankCredentials& clientBankCred, float amount);
private:

};


#endif	/* MCISBANKTC_H */

