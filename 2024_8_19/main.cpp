#include <iostream>
using namespace std; 
#include "point.h"
#include "Circe.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void is_Same(Circe c, point p)
{
	int distance = (p.get_X() - c.get_point().get_X()) * (p.get_X() - c.get_point().get_X()) +
	(p.get_Y() - c.get_point().get_Y()) * (p.get_Y() - c.get_point().get_Y());//����ǵüӣ� 
	
	int radius = c.get_R() * c.get_R();
	if(distance > radius)
	{
		cout << "����Բ��" << endl; 
	}
	else if(distance == radius)
	{
		cout << "����Բ��" << endl; 
	}
	else 
	{
		cout << "����Բ��" << endl; 
	}
	
}
int main(int argc, char** argv) {
	Circe c1;
	c1.set_R(10);
	point p1;
	p1.set_X(10);
	p1.set_Y(10);
	point p2;
	p2.set_X(10);
	p2.set_Y(0);
	c1.set_point(p2);
	
	is_Same(c1,p1);
	return 0;
}
