#pragma once
#include <iostream> 
using namespace std;

class point//�����Ĵ�СдҪȷ�������һ�� 
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

