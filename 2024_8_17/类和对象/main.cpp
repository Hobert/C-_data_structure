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
//};//��Ľ�β��������Ҫ����; 
//
//int main(int argc, char** argv) {
//	
//	Circle C1;
//	C1.radlus = 10;
//	cout << "Բ���ܳ�" << C1.get_C() << endl; 	
//	return 0;
//}



//----------------------------------------------------------------------------------------------------------------------





//class Person
//{
//	//1�������Լ����ƶ�дȨ��
//	//2������д���Լ��������Ч��
//	private:
//		string P_name;//�����ɶ���д
//		int P_age;//����ֻ��Ҳ����д������������� 0 ��150֮��)
//		string P_ido;//ż��ֻд
//	public:
//		void setname(string name)
//		{
//			P_name = name;//�������뺯�����������벻ͬ 
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
//				cout << "���벻����Ҫ��" << endl;
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
//	cout << "���ƣ�" << p1.getido() << endl;
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
			cout << "��������һ��" << endl; 
		}
		else
		{
			cout << "�������岻һ��" << endl; 
		}
		
	}	
};

void judge_Cube(Cube &c1 , Cube &c2)//ȫ�ֺ���ʹ�����ô��Σ�������ָ��һ�����ص���Ϊ�βδ������� 
{
	if (c1.get_L() == c2.get_L() && c1.get_W() == c2.get_W() && c1.get_H() == c2.get_H())
	{
		cout << "��������һ��" << endl; 
	}
	else
	{
		cout << "�������岻һ��" << endl; 
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

