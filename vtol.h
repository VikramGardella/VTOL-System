#ifndef VTOL_H
#define VTOL_H

class vtol{

private:
	double x, y, z;
	double totalMass;

public:
	//constructor
	vtol();

	//accessors
	double getX();
	double getY();
	double getZ();

	double getTotalMass();

	//mutators
	void setX(double newX);
	void setY(double newY);
	void setZ(double newZ);

	void setTotalMass(double newTotalMass);

	//functions


};


#endif
