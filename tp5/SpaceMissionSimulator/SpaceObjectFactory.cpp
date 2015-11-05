/* 
 * File:   SpaceObjectFactory.cpp
 * Author: begooden
 * 
 * Created on November 22, 2014, 8:25 AM
 */

#include <string>

#include "SpaceObjectFactory.h"
#include "SpaceCraft.h"
#include "SpacePlanet.h"

SpaceObjectFactory::SpaceObjectFactory() {
}

SpaceObjectFactory::SpaceObjectFactory(const SpaceObjectFactory& orig) {
}

SpaceObjectFactory::~SpaceObjectFactory() {
}

/**
 * Create a SpaceCraft with an initial cartesian position
 * @param id Identifier of the SpaceCraft
 * @param pos X,Y,Z position in meters (m)
 * @param vel X,Y,Z speed in m/s
 * @param acc X,Y,Z speed in m/s^2
 * @return 
 */
SpaceCraft SpaceObjectFactory::createSpaceCraft(const std::string& id, const Data3D& pos, const Data3D& vel, const Data3D& acc){
    SpaceCraft sc(id);
    sc.setPosVelAcc(pos, vel, acc);
    return sc;
}

/**
 * Create a SpacePlanet with an initial cartesian position
 * @param id Identifier of the SpacePlanet
 * @param pos X,Y,Z position in meters (m)
 * @param vel X,Y,Z speed in m/s
 * @param acc X,Y,Z speed in m/s^2
 * @return 
 */
SpacePlanet SpaceObjectFactory::createSpacePlanet(const std::string& id, const Data3D& pos, const Data3D& vel, const Data3D& acc){
    SpacePlanet ss(id);
    ss.setPosVelAcc(pos, vel, acc);
    return ss;
}


