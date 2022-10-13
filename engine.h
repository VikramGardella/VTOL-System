#ifndef ENGINE_H
#define ENGINE_H

class engine{

private:
	double angleX, angleY, angleZ;
	double mass;
	double maxThrust;
	double currThrottle;

public:
	//constructor
	engine();

	//accessors
	double getAngleX();
	double getAngleY();
	double getAngleZ();

	double getMass();
	double getMaxThrust();
	double getCurrThrottle();


	//mutators
	void setAngleX(double newX);
	void setAngleY(double newY);
	void setAngleZ(double newZ);

	void setMass(double newMass);
	void setMaxThrust(double newMaxThrust);
	void setCurrThrottle(double newCurrThrottle);

	//functions


};


#endif
