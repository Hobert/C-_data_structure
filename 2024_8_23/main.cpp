#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//class Person
//{
//public:
//	//静态成员函数也是有访问权限的，外部不可以访问private 
//	static my_func()
//	{
//		age = 22;//静态成员函数可以访问静态成员变量
//		//静态成员函数不可以访问非静态成员变量，无法区分到底是哪个对象的成员变量 
//	}
//	static int age;//静态变量需要写在public下 ，class的成员变量默认是private的，需要公共权限才可以类外声明 
//	//静态成员变量也是有访问权限的
//};
//
//int Person::age = 18;//类作用域 
//
//void test01()
//{
//
//	Person p1;
//	cout << p1.age << endl;
//	Person p2;
//	p2.age = 20; 
//	cout << p1.age << endl; 
//	
//	
//	p1.my_func();
//	cout << p1.age << endl; 
//	cout << p2.age << endl;
//	Person::my_func();//直接通过类名访问函数 
//	 
//	
//	cout << Person::age << endl;
//	
//}
//int main(int argc, char** argv) {
//	test01();
//	
//	return 0;
//}




//------------------------------------------------------------------------------------- 



//class Person
//{
//	int age;//非静态成员变量属于类的对象上
//	static int hei;//静态成员变量不属于类对象上
//	void my_func();//非静态成员函数不属于类对象上
//	static void funv();//静态成员函数不属于类的对象上
//	
//};
//
////void test01()
////{
////	Person p;
////	
////	cout << sizeof(p) << endl;
////}
//
//void test02()
//{
//	Person p;
//	cout << sizeof(p) << endl;//4
//}
//
//int main()
//{
////	test01();
//	test02();
//	
//	
//	return 0;
//}




//---------------------------------------------------------------------------------------------------

class Person
{
public:
	Person(int age)
	{
		//this指针指向被调用的成员函数所属的对象
		this -> age = age;//这样可以避免成员变量与形参同名导致错误的情况 
	}
	Person& add_age(Person &p)//如果函数的返回值类型不是引用而是Person,则会导致链式编程失败，因为函数每次返回都创建的是新的类对象 
	{
		this -> age += p.age;
		return *this; 
		//this指向p2的指针，而*this指向的就是p2这个对象本体
	}
	int age;
};


void test01()
{
	Person p1(18);
	cout << p1.age << endl;
	Person p2(10);
	
	//链式编程
	p1.add_age(p2).add_age(p2);
	cout << p1.age << endl; 
}



int main()
{
	test01();
	
	return 0;
}
