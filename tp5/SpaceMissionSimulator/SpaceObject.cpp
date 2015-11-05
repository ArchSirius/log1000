/* 
 * File:   SpaceObject.cpp
 * Author: begooden
 * 
 * Created on November 23, 2014, 7:18 AM
 */

#include "SpaceObject.h"
#include "Data.h"

SpaceObject::SpaceObject(std::string id): id(id) {
}

SpaceObject::SpaceObject(const SpaceObject& orig) {
    this->id = orig.id;
    this->acceleration = orig.acceleration;
    this->position = orig.position;
    this->velocity = orig.velocity;
}

SpaceObject::~SpaceObject() {
}

void SpaceObject::setPosVelAcc(const Data3D& position, const Data3D& velocity, const Data3D& acceleration){
    this->position = position;
    this->velocity = velocity;
    this->acceleration = acceleration;
}