#include "vtol.h"

//Constructor
vtol::vtol(){
	x = 0;
	y = 0;
	z = 0;

	totalMass = 0;
}

//Accessors
double vtol::getX(){return x;}
double vtol::getY(){return y;}
double vtol::getZ(){return z;}

double vtol::getTotalMass(){return totalMass;}


//Mutators
void vtol::setX(double newX){x = newX;}
void vtol::setY(double newY){y = newY;}
void vtol::setZ(double newZ){z = newZ;}

void vtol::setTotalMass(double newTotalMass){totalMass = newTotalMass;}



//Functions
