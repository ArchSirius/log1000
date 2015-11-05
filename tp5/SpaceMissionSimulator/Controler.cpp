/* 
 * File:   Controler.cpp
 * Author: begooden
 * 
 * Created on November 22, 2014, 12:45 PM
 */

#include <vector>
#include <iostream>

#include "Controler.h"
#include "Data.h"
#include "SpaceCraft.h"
#include "SpacePlanet.h"

Controller::Controller() {
}

Controller::Controller(const Controller& orig) {
}

Controller::~Controller() {
}

/**
 * Display all the space object ids on the console 2 + 1 + 0 + 1 + 1 + 0 + 0 +1 
 */
void Controller::displaySpaceObjectIds(){
    
    std::cout << "These are the objects on space:" << std::endl;
    std::vector<std::string> spaceCraftIds = this->sandBox.wantSpaceCraftIds();
    for (int i = 0; i < spaceCraftIds.size();i++){
        std::cout << spaceCraftIds[i] << std::endl;
    }
    std::vector<std::string> spacePlanetIds = this->sandBox.wantSpacePlanetIds();
    for (int i = 0 ;i < spacePlanetIds.size(); i++){
        std::cout << spacePlanetIds[i] << std::endl;
    }
}

/**
 * Create an space object of type SpaceCraft or SpacePlanet in the simulation Sandbox
 * @param id Identifier of the space object, e.g., Appolo
 * @param type Type of space object to create, 0 = SpaceCraft, 1 = SpacePlanet
 * @param pos X,Y,Z position in meters (m)
 * @param vel X,Y,Z speed in m/s
 * @param acc X,Y,Z speed in m/s^2
 */
void Controller::createSpaceObj(const std::string& id, int type, const Data3D& pos, const Data3D& vel, const Data3D& acc){
    SpaceCraft sc = this->spaceObjFactory.createSpaceCraft(id, pos, vel, acc);
    SpacePlanet sp = this->spaceObjFactory.createSpacePlanet(id, pos, vel, acc);
    switch(type){
        case Controller::SpaceCraftType:
            this->sandBox.addSpaceCraft(sc);
            break;
        case Controller::SpacePlanetType:
            this->sandBox.addSpacePlanet(sp);
        default:
            break;
    }
    
}
