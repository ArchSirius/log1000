/* 
 * File:   main.cpp
 * Author: begooden
 *
 * Created on November 22, 2014, 7:25 AM
 */

#include <cstdlib>
#include <vector>
#include <iostream>

#include "SpaceCraft.h"
#include "Data.h"
#include "SandBox.h"
#include "Controler.h"
#include "SpaceObject.h"

using namespace std;

/*
 * 
 */
int main(int argc, char** argv){
    //Spacecrafts
    SpaceCraft sc("Ranger SpaceCraft");
    sc.setPosVelAcc({1.0,2.0,3.0},{1.0,2.0,3.0},{0.0,0.0,0.0});
    //Controler to control the mission
    Controller missionControler;
    missionControler.createSpaceObj("Ranger SpaceCraft",Controller::SpaceCraftType,{0.0, 0.0, 0.0},{0.0, 0.0, 0.0},{0.0, 0.0, 0.0});
    missionControler.createSpaceObj("Alpha Planet",Controller::SpacePlanetType,{0.0, 0.0, 0.0},{0.0, 0.0, 0.0},{0.0, 0.0, 0.0});
    missionControler.displaySpaceObjectIds();
      
    double temp = sc.getTemperature();
    cout << "Temperature of Ranger: " << temp << endl;
    
    return 0;
}

