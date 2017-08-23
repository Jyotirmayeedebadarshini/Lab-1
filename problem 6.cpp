#include <iostream>
using namespace std;

int main()
{
	float r,area,circumference,diameter;
	cout<<"enter radius of the circle:";
	cin>>r;
	area=3.141*(r * r);
	circumference=2*3.141*r;
	diameter=2*r;
	cout<<"area of the circle";
	cout<<area;
	cout<<"circumference of circle:";
	cout<<circumference;
	cout<<"diameter of the circle:";
	cout<<diameter;
return 0;	
}
