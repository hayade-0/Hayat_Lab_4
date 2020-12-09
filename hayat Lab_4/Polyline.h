#include<iostream>
#include"Point2D.h"
using namespace std;
class Polyline
{
public:
	Point2D* array;
	int counter;
	int size;
	Polyline()
	{
		array = new Point2D[0];
		counter = 0;
		size = 0;
	}
	Polyline(int size)
	{
		array = new Point2D[size];
		counter = 0;
		this->size = size;
	}
	~Polyline()
	{

	}
	void add_new(const Point2D point);
	Point2D const retrieve_point(int index);
	void remove();
	bool check();
	int const get_total();
	float const get_length();
	void const print();

};