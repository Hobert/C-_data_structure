#pragma once
#include <iostream> 
using namespace std;
#include "point.h"

class Circe
{
	public:
		void set_R(int r);
		
		int get_R();
		
		void set_point(point p);
		
		point get_point();
		
	private:
		int m_r;
		point Circe_heart;
	
};
	
