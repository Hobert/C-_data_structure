#pragma once
#include <iostream> 
using namespace std;

class point//类名的大小写要确保与后面一致 
{
	public:
		void set_X(int x);
	
		int get_X();
	
		void set_Y(int y);
		
		int get_Y();
		
	private:
		int m_x;
		int m_y;
	
}; 

