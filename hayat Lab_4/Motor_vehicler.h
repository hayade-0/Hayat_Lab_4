#include<iostream>
#include<string>
using namespace std;
class Engine
{
public:
	float sizeInlitres;
	int numberOfCylinders;
	Engine()
	{
		sizeInlitres = 0;
		numberOfCylinders = 0;
	}
	Engine(float size, int nCylinder)
	{
		sizeInlitres = size;
		numberOfCylinders = nCylinder;
	}
};
class Body
{
public:
	string color;
	float width;
	float height;
	Body()
	{
		color = "white";
		width = 0;
	}

	Body(string colorType, float widthInMeter, float heightInMeter)
	{
		color = colorType;
		width = widthInMeter;
		height = heightInMeter;
	}

};
class Person
{
public:
	string name;
	string address;
	bool allowedToDrive;
	Person()
	{
		name = "default";
		address = "emptyAdress";
		allowedToDrive = false;
	}
	Person(string ownerName, string ownerAdress, bool lisence)
	{
		name = ownerName;
		address = ownerAdress;
		allowedToDrive = lisence;
	}

};

class MotorVehicle
{
public:
	Engine engine;
	Body body;
	Person owner;
	float* tireDiameters;
	int numberOfTires;
	string model;
	MotorVehicle()
	{
		numberOfTires = 0;
		model = "modelName";
		tireDiameters = new float[0];
	}


	MotorVehicle(int nTires, string modelName)
	{
		numberOfTires = nTires;
		model = modelName;
		tireDiameters = new float[nTires];
	}
	~MotorVehicle()
	{

	}
	void print();
};

