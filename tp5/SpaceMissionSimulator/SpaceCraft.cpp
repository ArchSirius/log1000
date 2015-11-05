/* 
 * File:   SpaceCraft.cpp
 * Author: begooden
 * 
 * Created on November 22, 2014, 7:42 AM
 */
#include <vector>

#include "SpaceCraft.h"
#include "Data.h"
#include "SpaceObject.h"

SpaceCraft::SpaceCraft(const std::string& id): SpaceObject::SpaceObject(id)
{
}

/**
 * Copie constructor
 * @param orig Object to copy
 */
SpaceCraft::SpaceCraft(const SpaceCraft& orig) : SpaceObject::SpaceObject((SpaceObject&) orig)
{
   /* this->id = orig.id;
    this->acceleration = orig.acceleration;
    this->position = orig.position;
    this->velocity = orig.velocity;*/
}

SpaceCraft::~SpaceCraft() {
}
/**
 * Get the position, velocity, and acceleration of the SpaceCraft
 * @return The position (m)(ind=0), velocity (m/s)(ind=1), acceleration (m/s^2)(ind=2), and velocity in km/h (ind=3)
 */
std::vector<Data3D> SpaceCraft::getPosVelAccVelInKmh(){
    //Calculate velocity kmh
    double MsToKmhFactor = 3.6;
    
    Data3D castedVelocity = velocity;
    castedVelocity.x *= MsToKmhFactor;
    castedVelocity.y *= MsToKmhFactor;
    castedVelocity.z *= MsToKmhFactor;
    
    //Form returned elements list
    std::vector<Data3D> posVelAccList;
    posVelAccList.push_back(this->position);
    posVelAccList.push_back(this->velocity);
    posVelAccList.push_back(this->acceleration);
    posVelAccList.push_back(castedVelocity);
    return posVelAccList;
}

/**
 * Set the position, velocity, and acceleration of the SpaceCraft
 * @param position The new position of the SpaceCraft (m)
 * @param velocity The new velocity of the SpaceCraft (m/s)
 * @param acceleration The new acceleration of the SpaceCraft (m/s^2)
 */
void SpaceCraft::setPosVelAcc(const Data3D& position, const Data3D& velocity, const Data3D& acceleration){
    this->position = position;
    this->velocity = velocity;
    this->acceleration = acceleration;
}

double SpaceCraft::getTemperature()
{
    return this->velocity.x + (this->acceleration.x/(this->velocity.x + 1));
}