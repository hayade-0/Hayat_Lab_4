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
	if (counter == 0)
		cout << "the array is empty" << endl;
	else
	{
		Point2D* copyArr = new Point2D[size];
		for (int i = 0;i < counter-1;i++)
			copyArr[i] = array[i];
			//one way to do this is to creat another arry from this and delete the old one	
		array =copyArr;
		counter = counter - 1;
	}
}

bool Polyline::check()
{
	if (counter > 0)
		return true;
	else
		return false;
}

int const Polyline::get_total()
{
	return counter;
}

float const Polyline::get_length()
{
	if (counter < 2)
		cout << "empty array or just one memebr" << endl;
	else {
		float total_Length = 0;
		for (int i = 0;i < counter - 1;i++)
		{
			Point2D current_point;
			current_point = array[i];
			total_Length += current_point.distance_to(array[i + 1]);
		}
		return total_Length;
	}
}

void const Polyline::print()
{
		for (int i = 0;i < counter;i++)
		{
			Point2D p = array[i];
			p.print();
		}

}

/*int main()
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
	cout << "doesth pathOne contain a point?" << boolalpha << pathOne.check() << endl;
	cout << "the total points in pathOne is :" << pathOne.get_total() << endl;
	cout << "the total pathOne distancr is: " <<  endl;
	pathOne.get_length();
	cout << "all the points in pathOne " << endl;
	pathOne.print();
}*/