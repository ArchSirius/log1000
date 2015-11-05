/* 
 * File:   Notifier.h
 * Author: begooden
 *
 * Created on November 9, 2014, 4:45 PM
 */

#ifndef NOTIFIER_H
#define	NOTIFIER_H

#include <string>

class Notifier {
public:
    Notifier(){};
    Notifier(std::string printUrl);
    Notifier(const Notifier& orig);
    virtual ~Notifier();
    
    void print(std::string str);
private:
    std::string printUrl;
};

#endif	/* NOTIFIER_H */

