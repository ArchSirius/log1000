/* 
 * File:   Controler.h
 * Author: begooden
 *
 * Created on November 22, 2014, 12:45 PM
 */

#ifndef CONTROLER_H
#define	CONTROLER_H

#include <string>

#include "SandBox.h"
#include "SpaceObjectFactory.h"
#include "Data.h"

class Controller {
public:
    static const int SpaceCraftType = 0;
    static const int SpacePlanetType = 1;
    
    Controller();
    Controller(const Controller& orig);
    virtual ~Controller();
    
    void createSpaceObj(const std::string& id, int type, const Data3D& pos, const Data3D& vel, const Data3D& acc);
    void displaySpaceObjectIds();
private:
    SpaceObjectFactory spaceObjFactory;
    SandBox sandBox;

};

#endif	/* CONTROLER_H */

