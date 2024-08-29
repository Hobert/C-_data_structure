#include <iostream>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//class Person
//{
//	public:
//		Person(int age)
//		{
//			m_age = new int(age);
//		}
//		~Person()
//		{
//			if (m_age != NULL)
//			{
//				delete m_age;
//				m_age = NULL;
//			}
//		}
//		
//		//重载赋值运算符
//		Person& operator=(Person &p)
//		{
//			
//			//编译器是提供浅拷贝
//			//m_Age = p.m_Age;
//			//应该先判断是否有属性在堆区，如果有先释放干净，然后再深拷贝
//			if (m_age != NULL)
//			{
//				delete m_age;
//				m_age = NULL; 
//			}
//			m_age = new int(*p.m_age);//进行深拷贝 
//			return *this; 
//		}
//		int* m_age;
//};
//
//void test01()
//{
//	
//	Person p1(18);
//	Person p2(20);
//	Person p3(25);
//	
//	p1 = p2 = p3;//这也是一种链式调用，连续赋值操作 
//	cout << "p1的年龄：" << *p1.m_age << endl;
//	cout << "p2的年龄：" << *p2.m_age << endl;
//	cout << "p3的年龄：" << *p3.m_age << endl;
//}
//
//int main(int argc, char** argv) {
//	
//	test01();
//	
//	return 0;
//}


//----------------------------------------------------------------------------------------

//class Person
//{
//	public:
//		Person(string name,int age)
//		{
//			m_age = age;
//			m_name = name;
//		} 
//		
//		//重载==号
//		bool operator==(Person &p)
//		{
//			if(m_age == p.m_age && m_name == p.m_name)
//			{
//				return true;
//			}
//			else
//			{
//				return false;
//				
//			}
//		}
//		//重载!=号
//		bool operator!=(Person &p)
//		{
//			if(m_age == p.m_age && m_name == p.m_name)
//			{
//				return false;
//			}
//			else
//			{
//				return true;
//				
//			}
//		}
//		int m_age;
//		string m_name;
//};
//
//void test01()
//{
//	Person p1("Akebi", 14);
//	Person p2("Komichi",15);
//	if(p1 == p2)
//	{
//		
//		cout << "p1和p2相等" << endl;
//	}
//	else
//	{
//		cout << "p1和p2不相等" << endl;
//	}
//	
//	
//	if(p1 != p2)
//	{
//		
//		cout << "p1和p2不相等" << endl;
//	}
//	else
//	{
//		cout << "p1和p2相等" << endl;
//	}
//	
//}
//
//int main()
//{
//	test01();
//	return 0;
//}

//-------------------------------------------------------------------------------------------------
class Person
{
	
};
int main()
{
	
	return 0;
}
