/* 
 * File:   SandBox.h
 * Author: begooden
 *
 * Created on November 22, 2014, 7:41 AM
 */

#ifndef SANDBOX_H
#define	SANDBOX_H

#include <vector>
#include <string>

#include "Data.h"
#include "SpaceCraft.h"
#include "SpacePlanet.h"

class SandBox {
public:
    SandBox();
    SandBox(const SandBox& orig);
    virtual ~SandBox();
    
    void addSpaceCraft(const SpaceCraft& sc);
    void addSpacePlanet(const SpacePlanet& ss);
    std::vector<std::string> wantSpaceCraftIds();
    std::vector<std::string> wantSpacePlanetIds();
private:
    std::vector<SpaceCraft> spaceCrafts;
    std::vector<SpacePlanet> spacePlanets;
};

#endif	/* SANDBOX_H */

