/* 
 * File:   SandBox.cpp
 * Author: begooden
 * 
 * Created on November 22, 2014, 7:41 AM
 */

#include <vector>
#include <string>

#include "SandBox.h"
#include "SpacePlanet.h"
#include "SpaceCraft.h"

SandBox::SandBox() {
}

SandBox::SandBox(const SandBox& orig) {
}

SandBox::~SandBox() {
}

/**
 * Get SpaceCraft identifiers
 * @return The SpaceCraft identifiers
 */
std::vector<std::string> SandBox::wantSpaceCraftIds(){
    std::vector<std::string> spaceCraftIds;
    int nbSpaceCrafts = this->spaceCrafts.size();
    for (int i=0; i<nbSpaceCrafts; i++)
    {
        spaceCraftIds.push_back(this->spaceCrafts[i].getID());
    }
    return spaceCraftIds;
}

/**
 * Get all the SpacePlanet identifiers
 * @return The SpacePlanent identifiers 
 */
std::vector<std::string> SandBox::wantSpacePlanetIds(){
    std::vector<std::string> spacePlanetIds;
    int nbSpacePlanets = this->spacePlanets.size();
    for (int i=0; i<nbSpacePlanets; i++)
    {
        spacePlanetIds.push_back(this->spacePlanets[i].getID());
    }
    return spacePlanetIds;
}

/**
 * Add a SpaceCraft to the sandbox
 * @param sc The SpaceCraft to add
 */
void SandBox::addSpaceCraft(const SpaceCraft& sc){
    this->spaceCrafts.push_back(sc);
}

/**
 * Add a SpacePlanent to the sandbox
 * @param sp The space planet to add
 */
void SandBox::addSpacePlanet(const SpacePlanet& sp){
    this->spacePlanets.push_back(sp);
}







