/* 
 * File:   TransactionControler.h
 * Author: begooden
 *
 * Created on November 9, 2014, 10:51 AM
 */

#ifndef TRANSACTIONCONTROLER_H
#define	TRANSACTIONCONTROLER_H

#include "BankCredentials.h"
#include "McisBankTC.h"

class TransactionControler {
public:
    TransactionControler();
    TransactionControler(const TransactionControler& orig);
    virtual ~TransactionControler();
    
    bool transfertFunds(BankCredentials& bc, float amount);
private:
    McisBankTC mcisBankTC; 

};

#endif	/* TRANSACTIONCONTROLER_H */

