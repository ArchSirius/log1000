/* 
 * File:   SpaceObject.h
 * Author: begooden
 *
 * Created on November 23, 2014, 7:18 AM
 */

#ifndef SPACEOBJECT_H
#define	SPACEOBJECT_H

#include "Data.h"
#include <string>
#include <vector>

class SpaceObject {
public:
    SpaceObject(std::string id);
    SpaceObject(const SpaceObject& orig);
    virtual ~SpaceObject();
    
    virtual double getTemperature() = 0 ;
    Data3D getPosition(){ return position ;}
    Data3D getVelocity(){ return velocity;}
    Data3D getAcceleration(){ return acceleration;}
    std::string getID(){ return id ;}
    void setPosition( Data3D pos) { position = pos; }
    void setVelocity( Data3D vel) { velocity = vel; }
    void setAcceleration( Data3D acc) { acceleration = acc; }
    void setID( std::string id_) { id = id_;} 
    
    // added 
   
    
    
    void setPosVelAcc(const Data3D& position,const Data3D& velocity,const Data3D& acceleration);
    //static Data3D& castMsToKmh(Data3D&);
    //static Data3D& castMtoKm(Data3D&);
    
    
private:
    
protected:
    
    std::string id;
    Data3D position;
    Data3D velocity;
    Data3D acceleration;

};

#endif	/* SPACEOBJECT_H */

