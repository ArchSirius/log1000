/* 
 * File:   Notifier.cpp
 * Author: begooden
 * 
 * Created on November 9, 2014, 4:45 PM
 */

#include "Notifier.h"

#include <fstream>
#include <iostream>

Notifier::Notifier(std::string printUrl):printUrl(printUrl){
}

Notifier::Notifier(const Notifier& orig) {
}

Notifier::~Notifier() {
}

void Notifier::print(std::string str){
    //str = str + "l";
    std::cout << "Notifier: " << str << std::endl;
    std::ofstream ofs((this->printUrl+"notifier_out").data());
    ofs << str << std::endl; // store the object to file
    ofs.close();
}

