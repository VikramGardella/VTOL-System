#include "engine.h"

//Constructor
engine::engine(){
	angleX = 0;
	angleY = 0;
	angleZ = 0;

	mass = 0;
	maxThrust = 500;
	currThrottle = 0;
}

//Accessors
double engine::getAngleX(){return angleX;}
double engine::getAngleY(){return angleY;}
double engine::getAngleZ(){return angleZ;}

double engine::getMass(){return mass;}
double engine::getMaxThrust(){return maxThrust;}
double engine::getCurrThrottle(){return currThrottle;}


//Mutators
void engine::setAngleX(double newAngleX){angleX = newAngleX;}
void engine::setAngleY(double newAngleY){angleY = newAngleY;}
void engine::setAngleZ(double newAngleZ){angleZ = newAngleZ;}

void engine::setMass(double newMass){mass = newMass;}
void engine::setMaxThrust(double newMaxThrust){maxThrust = newMaxThrust;}
void engine::setCurrThrottle(double newCurrThrottle){currThrottle = newCurrThrottle;}


//Functions
