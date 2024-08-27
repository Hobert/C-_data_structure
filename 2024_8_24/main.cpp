#include <iostream>
using namespace std;
#include <string.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

//class Person
//{
//	public:
//		void show_class()
//		{
//			cout << "this is a class" << endl;
//		}
//		void show_member()
//		{
//			cout << "age:" << m_age << endl;//在调用成员变量时，实际上形式是：this->m_age, 但此时p为空指针 ，this也是一个空指针 
//		}	
//		int m_age;
//};
//
//void test01()
//{
//	Person* p = NULL;
//	p->show_class();
//	p->show_member();
//}
//
//int main(int argc, char** argv) {
//	test01();
//	
//	
//	return 0;
//}


//----------------------------------------------------------------------------------------------------------
//class Person
//{
//	public:
//		//this指针的本质是指针常量指针的指向是不可以修改的
//		//this指针不可以修改指针的指向的
//		//在成员函数后面加const，修饰的是this指向，让指针指向的值也不可以修改
//		//相当于const Person * const this
//		void my_add() const
//		{
//			//m_age = 10;
//			this -> m_b = 30;
//		}
//		void test()
//		{
//			
//		}
//		
//		int m_age = 10;
//		mutable int m_b = 20; //特殊变量，即使在常函数中，也可以修改这个值,加关键字mutable
//};
//int main()
//{
//	//声明常量时需要为其指定一个初始值，要不就将 m_age 和 m_b 赋值，要不实例化对象时写成const Person p = Person(); 
//	//不然会报错 
//	const Person p;//在对象前加const，变为常对象
//	p.my_add();
//	p.m_b = 50;//m_B是特殊值，在常对象下也可以修改
//	//p.test();//常对象不可以调用普通成员函数，因为普通成员函数可以修改属性
//	return 0;
//} 


//----------------------------------------------------------------------------

//class school 
//{
//	friend void gay();
//	public:
//		school()
//		{
//			school_lou = "楼";
//			school_fang = "房"; 
//		}
//		
//	private:
//		string school_lou;
//		string school_fang;
//	
//};
//
////全局函数 
//void gay()
//{
//	
//	school sc;
//	cout << sc.school_lou << endl;
//	cout << sc.school_fang << endl;
//}
//void test01()
//{
//	gay();
//}
//int main()
//{
//	test01();
//	return 0;
//}


//-------------------------------------------------------------------------------------------------

class School;

class Gay 
{
	public:
		Gay();
		void visit01();
		void visit02();
		School* school;
		 
};

class School
{
	friend void Gay::visit01();
	public:
		School()
		{
			school_lou = "楼";
			school_fang = "房"; 
		}
		string school_lou;
	private:
		
		string school_fang;	
};

Gay::Gay()
{
	school = new School;//new School会调用其构造函数 
}

void Gay::visit01()
{
	
	cout << school->school_lou << endl;
	cout << school->school_fang << endl;

}

void Gay::visit02()
{
	
	cout << school->school_lou << endl;
	//cout << school->school_fang << endl;

}

void test01()
{
	Gay gg;
	gg.visit01();
	gg.visit02();
}
int main()
{
	test01();
	return 0;
} 
