/* 
 * File:   SpacePlanet.h
 * Author: begooden
 *
 * Created on November 22, 2014, 7:42 AM
 */

#ifndef SPACESATTELITE_H
#define	SPACESATTELITE_H

#include <vector>
#include <string>
#include "Data.h"
#include "SpaceObject.h"

class SpacePlanet : public SpaceObject {
public:
    
    
    SpacePlanet(const std::string& id);
    SpacePlanet(const SpacePlanet& orig);
    virtual ~SpacePlanet();
    virtual double getTemperature();
    
    //Getters and Setters
    void setVolcanicActivity(double volcanicActivity);
    double getVolcanicAcitvity();
    std::vector<Data3D> getPosVelAcc();
private:
    double volcanicActivity;

};

#endif	/* SPACESATTELITE_H */

