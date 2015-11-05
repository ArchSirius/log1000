/* 
 * File:   McisBankAccount.cpp
 * Author: begooden
 * 
 * Created on November 9, 2014, 1:09 PM
 */

#include "McisBankAccount.h"

std::ostream& operator<<(std::ostream& os, const McisBankAccount& mba){
    os << mba.balance;
    return os;
}
std::istream& operator>>(std::istream& is, McisBankAccount& mba){
    is >> mba.balance;
    return is;
}

