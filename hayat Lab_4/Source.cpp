#include <typeinfo>
#include<iostream>
using namespace std;
int main()
{
	int x = 0;
	string j = typeid(x).name();
	cout << j;
}