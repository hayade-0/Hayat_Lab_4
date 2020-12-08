#include "Motor_vehicler.h"
#include<iostream>
#include<string>
using namespace std;


void MotorVehicle::print()
{
	cout << "Information of vehicle Number " << 1 << endl;
	cout << "Engine size in litters: " << engine.sizeInlitres << endl;
	cout << "Engine number of cylinders: " << engine.numberOfCylinders << endl;
	cout << "The color of the body of the vehicel: "<< body.color << endl;
	cout << "The width of the body of the vehivel: "<< body.width << endl;
	cout << "The height of the body of the vehivel: "<< body.height << endl;
	cout << "The owner name: " << owner.name << endl;
	cout << "The owner address: " <<owner.address << endl;
	cout << "Is " << owner.name << " allowed to drive : "<< owner.allowedToDrive << endl;
	cout << "The number of tire:" << numberOfTires<< endl;
	cout << "The model of the vehicle: "<< model << endl;
	for (int i = 0;i < numberOfTires; i++)
	{
		cout << "Tire No " << i + 1 << "'s diametr :"<<tireDiameters[i]<< endl;
		
	}

}
/*int main()
{
	float tireDiameter, sizeInlitres, width, height;
	int numberOfTires, numberOfCylinders;
	string model, color, name, address;
	bool allowedToDrive;
	cout << "Information of vehicle Number " << 1 << endl;
	cout << "Plese Enter the Engine size in litters" << endl;
	cin >> sizeInlitres;
	cout << "Plese Enter the Engine number of cylinders " << endl;
	cin >> numberOfCylinders;
	cout << "Plese Enter the color of the body of the vehicel" << endl;
	cin >> color;
	cout << "Plese Enter the width of the body of the vehivel" << endl;
	cin >> width;
	cout << "Plese Enter the height of the body of the vehivel" << endl;
	cin >> height;
	cout << "Plese Enter the owner name" << endl;
	cin >> name;
	cout << "Plese Enter the owner address" << endl;
	cin >> address;
	cout << "Is "<< name<<" allowed to drive Plese Enter 1 if yes; otherwise enter 0" << endl;
	cin >> allowedToDrive;
	cout << "Plese Enter the number of tire"<< endl;
	cin >> numberOfTires;
	cout << "Plese Enter the model of the vehicle" << endl;
	cin >> model;
	MotorVehicle Car1(numberOfTires, model);
	Car1.body.color = color;
	Car1.body.height = height;
	Car1.body.width= width;
	Car1.engine.numberOfCylinders = numberOfCylinders;
	Car1.engine.sizeInlitres = sizeInlitres;
	Car1.owner.name = name;
	Car1.owner.address = address;
	Car1.owner.allowedToDrive = allowedToDrive;
	for (int i = 0;i < numberOfTires ; i++)
	{
		cout << "Please inter tire No " << i + 1 << "'s diametr" << endl;
		cin >> tireDiameter;
		Car1.tireDiameters[i] = tireDiameter;
	}
	Car1.print();
	cout << "Information of vehicle Number " << 2 << endl;
	cout << "Plese Enter the Engine size in litters" << endl;
	cin >> sizeInlitres;
	cout << "Plese Enter the Engine number of cylinders " << endl;
	cin >> numberOfCylinders;
	cout << "Plese Enter the color of the body of the vehicel" << endl;
	cin >> color;
	cout << "Plese Enter the width of the body of the vehivel" << endl;
	cin >> width;
	cout << "Plese Enter the height of the body of the vehivel" << endl;
	cin >> height;
	cout << "Plese Enter the owner name" << endl;
	cin >> name;
	cout << "Plese Enter the owner address" << endl;
	cin >> address;
	cout << "Is " << name << " allowed to drive Plese Enter 1 if yes; otherwise enter 0" << endl;
	cin >> allowedToDrive;
	cout << "Plese Enter the number of tire" << endl;
	cin >> numberOfTires;
	cout << "Plese Enter the model of the vehicle" << endl;
	cin >> model;
	MotorVehicle Car2(numberOfTires, model);
	Car2.body.color = color;
	Car2.body.height = height;
	Car2.body.width = width;
	Car2.engine.numberOfCylinders = numberOfCylinders;
	Car2.engine.sizeInlitres = sizeInlitres;
	Car2.owner.name = name;
	Car2.owner.address = address;
	Car2.owner.allowedToDrive = allowedToDrive;
	for (int i = 0;i < numberOfTires; i++)
	{
		cout << "Please inter tire No " << i + 1 << "'s diametr" << endl;
		cin >> tireDiameter;
		Car2.tireDiameters[i] = tireDiameter;
	}
	Car2.print();
}
*/
