/* 
 * File:   SpaceObjectFactory.h
 * Author: begooden
 *
 * Created on November 22, 2014, 8:25 AM
 */

#ifndef SPACEOBJECTFACTORY_H
#define	SPACEOBJECTFACTORY_H

#include <vector>

#include "SpaceCraft.h"
#include "SpacePlanet.h"
#include "Data.h"

class SpaceObjectFactory {
public:
    SpaceObjectFactory();
    SpaceObjectFactory(const SpaceObjectFactory& orig);
    virtual ~SpaceObjectFactory();
    
    SpaceCraft createSpaceCraft(const std::string& id, const Data3D& pos, const Data3D& vel, const Data3D& acc);
    SpacePlanet createSpacePlanet(const std::string& id, const Data3D& pos, const Data3D& vel, const Data3D& acc);
private:

};

#endif	/* SPACEOBJECTFACTORY_H */

