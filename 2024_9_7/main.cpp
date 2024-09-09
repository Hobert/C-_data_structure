#include <iostream>
using namespace std; 
#include <string>
#include <typeinfo> 
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

//template<class Nametype,class Agetype>
//class Person
//{
//	public:
//		Person(Nametype name, Agetype age)
//		{
//			this->m_age = age;
//			this->m_name = name;
//		}
//		void showinfo()
//		{
//			cout << "name:" << this->m_name << endl;
//			cout << "age:" << this->m_age << endl;
//		}
//		string m_name;
//		int m_age;	
//};
//void test01()
//{
//	Person<string,int> p1("Akebi" , 14);
//	p1.showinfo();
//}
//
//int main(int argc, char** argv) {
//	test01();
//	
//	return 0;
//}


//--------------------------------------------------------------------------------------------




//��ģ����ģ������б��п�����Ĭ�ϲ���
//template<class Nametype,class Agetype = int>
//class Person
//{
//	public:
//		Person(Nametype name, Agetype age)
//		{
//			this->m_age = age;
//			this->m_name = name;
//		}
//		void showinfo()
//		{
//			cout << "name:" << this->m_name << endl;
//			cout << "age:" << this->m_age << endl;
//		}
//		string m_name;
//		int m_age;	
//};
//void test01()
//{
//	Person<string> p1("Akebi" , 14);
//	p1.showinfo();
//}
//
//int main(int argc, char** argv) {
//	test01();
//	
//	return 0;
//}


//---------------------------------------------------------------------------------------------


//template<class T>
//class my_class
//{
//public:
//	T obj;
//	
//	//��ģ���еĳ�Ա���������ڵ��õ�ʱ��Ž��д��� 
//	void my_func01()
//	{
//		obj.showPerson1();
//	}
//	void my_func02()
//	{
//		obj.showPerson2();
//	}
//	
//};
//
//
//class Person1
//{
//	public:
//		void showPerson1()
//		{
//			cout << "show Person1" << endl;
//		}
//};
//
//
//class Person2
//{
//	public:
//		void showPerson2()
//		{
//			cout << "show Person2" << endl;
//		}
//};
//
//void test01()
//{
//	my_class<Person2> p1;
////	p1.my_func01();
//	p1.my_func02();
//}
//
//int main(int argc, char** argv) {
//	test01();
//	
//	return 0;
//}


//---------------------------------------------------------------------------------------------------




template<class T1,class T2> 
class Person
{
	public:
		Person(T1 name,T2 age)
		{
			this->m_age  = age;
			this->m_name = name;		
		}
		void showPerson()
		{
			cout << "name: " << m_name << endl;
			cout << "age: "  << m_age << endl;
		}
		T1 m_name;
		T2 m_age;	
};


//��ģ���������������
void my_print1(Person<string,int> &p)
{
	p.showPerson();
	
}

//2������ģ�廯
template<class T1,class T2>
void my_print2(Person<T1,T2> &p)
{
	p.showPerson();
	cout << "T1�����ͣ�" << typeid(T1).name() << endl; 
	cout << "T2�����ͣ�" << typeid(T2).name() << endl;
}

//3��������ģ�廯
template<class T>
void my_print3(T &p)
{
	p.showPerson();
	
	cout << "T�����ͣ�" << typeid(T).name() << endl;
}

void test01()
{
	Person<string,int>p1("Akebi",14);
	my_print1(p1);
}

void test02()
{
	Person<string,int>p1("Komichi",15);
	my_print2(p1);
}

void test03()
{
	Person<string,int>p1("Hobert",21);
	my_print3(p1);
}

int main()
{
//	test01();
	test02();
//	test03();
	return 0;
}

 
