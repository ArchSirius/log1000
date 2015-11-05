/* 
 * File:   SpaceCraft.h
 * Author: begooden
 *
 * Created on November 22, 2014, 7:42 AM
 */

#ifndef SPACECRAFT_H
#define	SPACECRAFT_H

#include <vector>
#include <string>
#include "SpaceObject.h"
#include "Data.h"

class SpaceCraft : public SpaceObject
{
public:
    SpaceCraft(const std::string& id);
    SpaceCraft(const SpaceCraft& orig);
    virtual ~SpaceCraft();
    virtual double getTemperature();
    
    std::vector<Data3D> getPosVelAccVelInKmh();
    void setPosVelAcc(const Data3D& position, const Data3D& velocity, const Data3D& acceleration);
   
    
    //static Data3D& castMsToKmh(Data3D&);
    //static Data3D& castMtoKm(Data3D&);
    
    
private:


};

#endif	/* SPACECRAFT_H */

