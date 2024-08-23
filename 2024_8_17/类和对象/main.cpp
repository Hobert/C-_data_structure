#include <iostream>
using namespace std;
#include <string>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//const double Pi = 3.14;
//class Circle
//{
//	public:
//		int radlus;
//		double get_C()
//		{
//			return 2*Pi*radlus;
//		}
//};//类的结尾大括号需要加上; 
//
//int main(int argc, char** argv) {
//	
//	Circle C1;
//	C1.radlus = 10;
//	cout << "圆的周长" << C1.get_C() << endl; 	
//	return 0;
//}



//----------------------------------------------------------------------------------------------------------------------





//class Person
//{
//	//1、可以自己控制读写权限
//	//2、对于写可以检测数据有效性
//	private:
//		string P_name;//姓名可读可写
//		int P_age;//年龄只读也可以写（年龄必须在王 0 到150之间)
//		string P_ido;//偶像只写
//	public:
//		void setname(string name)
//		{
//			P_name = name;//属性名与函数参数名必须不同 
//		}
//		string getname()
//		{
//			
//			return P_name;
//		}
//		void setage(int age)
//		{
//			if(age< 0 || age>150)
//			{
//				cout << "输入不符合要求" << endl;
//				return; 
//			}
//			P_age = age;
//		}
//		void setido(string ido)
//		{
//			P_ido = ido;
//		}
//		string getido()
//		{
//			return P_ido;
//		}
//	
//};
//
//int main()
//{
//	Person p1;
//	p1.setido("Akebi");
//	cout << "我推：" << p1.getido() << endl;
//	
//	p1.setage(20);
//	
//	p1.setname("Hobert");
//	
//
//	return 0;
//}



//----------------------------------------------------------------------------------------------------------------------

class Cube
{
private:
	int m_L;
	int m_W;
	int m_H;
	
public:
	void set_Cube(int L,int W ,int H)
	{
		m_L = L;
		m_W = W;
		m_H = H; 
	}
	int get_L()
	{
		return m_L; 
	}
	int get_W()
	{
		return m_W;
	}
	int get_H()
	{
		return m_H; 
	}
	void  class_isSame(Cube c)
	{
		if(m_L == c.get_L() && m_W == c.get_W() && m_H == c.get_H())
		{
			cout << "两立方体一致" << endl; 
		}
		else
		{
			cout << "两立方体不一致" << endl; 
		}
		
	}	
};

void judge_Cube(Cube &c1 , Cube &c2)//全局函数使用引用传参，可以像指针一样不必单独为形参创建变量 
{
	if (c1.get_L() == c2.get_L() && c1.get_W() == c2.get_W() && c1.get_H() == c2.get_H())
	{
		cout << "两立方体一致" << endl; 
	}
	else
	{
		cout << "两立方体不一致" << endl; 
	}
} 


int main()
{
	
	Cube c1;
	c1.set_Cube(10,10,10);
	
	Cube c2;
	c2.set_Cube(10,10,10);
	
	judge_Cube(c1,c2);
	
	
	return 0;
} 

