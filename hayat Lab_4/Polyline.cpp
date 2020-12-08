#include<iostream>
#include "Polyline.h"
#include <typeinfo>
using namespace std;

void Polyline::add_new(const Point2D point)
{

	if (counter < size)
	{
		array[counter] = point;
		counter += 1;
	}
	else
		cout << "Eror!the array is full" << endl;
	
}

Point2D const Polyline::retrieve_point(int index)
{
	//one way to do this is to creat another arry from this and delete the old one
	return array[index];
}

void Polyline::remove()
{

	if (counter = size)
		delete &array[size];
	if (counter>0 && counter!=size)
		delete& array[counter];
	if (counter == 0)
		cout << "the array is empty" << endl;

}

bool Polyline::check()
{
	return false;
}

void Polyline::get_total()
{
}

void Polyline::get_length()
{
}

void Polyline::print()
{
}

int main()
{
	Polyline pathOne(5);
	Point2D pointone;
	pointone.x = 2.5;
	pointone.y = 3.1;
	Point2D pointTwo;
	pointTwo.x = 7.1;
	pointTwo.y = 2.4;
	pathOne.add_new(pointone);
	pathOne.add_new(pointTwo);
	cout << pathOne.array[1].x << endl;
	pathOne.remove();
}