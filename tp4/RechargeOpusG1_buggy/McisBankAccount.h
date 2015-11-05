/* 
 * File:   McisBankAccount.h
 * Author: begooden
 *
 * Created on November 9, 2014, 1:09 PM
 */

#ifndef MCISBANKACCOUNT_H
#define	MCISBANKACCOUNT_H

#include<iostream>

class McisBankAccount{
public:
    McisBankAccount(){}
    McisBankAccount(float balance):balance(balance){}
    virtual ~McisBankAccount(){};
    
    float balance;
private:
};

std::ostream& operator<<(std::ostream& os, const McisBankAccount& mba);
std::istream& operator>>(std::istream& is, McisBankAccount& mba);

#endif	/* MCISBANKACCOUNT_H */

