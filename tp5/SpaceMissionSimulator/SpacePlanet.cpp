/* 
 * File:   SpaceSattelite.cpp
 * Author: begooden
 * 
 * Created on November 22, 2014, 7:42 AM
 */

#include <vector>
#include <string>

#include "SpacePlanet.h"
#include "SpaceCraft.h"
#include "Data.h"
#include "SpaceObject.h"

SpacePlanet::SpacePlanet(const std::string& id): SpaceObject::SpaceObject(id)
{
}

/**
 * Copie constructor
 * @param orig Object to copy
 */
SpacePlanet::SpacePlanet(const SpacePlanet& orig): SpaceObject::SpaceObject( (SpaceObject&) orig) {
    
    this->volcanicActivity = orig.volcanicActivity;
}

SpacePlanet::~SpacePlanet() {
}
/**
 * Get the position, velocity, and acceleration of the SpacePlanet
 * @return The position (ind=0), velocity (ind=1), and acceleration (ind=2)
 */
std::vector<Data3D> SpacePlanet::getPosVelAcc(){
    
    std::vector<Data3D> posVelAccList;
    posVelAccList.push_back(this->position);
    posVelAccList.push_back(this->velocity);
    posVelAccList.push_back(this->acceleration);
    return posVelAccList;
}

double SpacePlanet::getTemperature(){
    return (this->acceleration.x/(this->velocity.x + 1));
}

/**
 * Set the position, velocity, and acceleration of the SpacePlanet
 * @param position The new position of the SpacePlanet
 * @param velocity The new velocity of the SpacePlanet
 * @param acceleration The new acceleration of the SpacePlanet
 */


/*
void SpacePlanet::setPosVelAcc(const Data3D& position, const Data3D& velocity, const Data3D& acceleration){
    this->position = position;
    this->velocity = velocity;
    this->acceleration = acceleration;
}*/
