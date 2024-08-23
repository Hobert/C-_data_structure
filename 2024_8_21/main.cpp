#include <iostream>
using namespace std;
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//class Person
//{
//	public:
//		
//		Person()
//		{
//			cout << "无参" << endl;
//		}
//		Person(int a, int b)
//		{
//			age = a;
//			height = new int(b);
//			cout << "有参" << endl; 
//		}
//		Person(const Person &p)
//		{
//			age = p.age;//编译器默认为浅拷贝 
//			height = new int(*p.height);//深拷贝操作 
//			cout << "拷贝" << endl;
//		}
//		
//		//堆区创建的数据由程序员手动释放 
//		~Person()
//		{
//			if (height != NULL)
//			{
//				delete height;
//				height = NULL;
//			}
//			cout << "析构函数" << endl;
//		}
//		int age;
//		int* height; 
//	
//};
//
////利用拷贝来初始化一个新对象 
//void test01()
//{
//	Person p1(18,172);
//	Person p2(p1);
//	cout << "p1的age：" <<  p1.age << endl;
//	cout << "p1的height：" <<  *p1.height << endl; 
//	cout << "p2的age：" <<  p2.age << endl;
//	cout << "p2的height：" <<  *p2.height << endl;
//}
//int main(int argc, char** argv) {
//	test01();
//	system("pause");
//	return 0;
//}




//------------------------------------------------------------------------------------


//class Person
//{
//	public:
//		Person(int a ,int b , int c):m_a(a),m_b(b),m_c(c)
//		{
//			
//		}		
//		int m_a;
//		int m_b;
//		int m_c;
//	
//};
//
//
//void test()
//{
//	
//	//Person p(1,2,3);//构造函数要这样调用 ,第一种 
//	Person p = Person(10,20,30);//第二种 
//
//	cout << p.m_a << endl;
//	cout << p.m_b << endl;
//	cout << p.m_c << endl;
//}
//int main()
//{
//	test();
//	return 0;
//}









//---------------------------------------------------------------------
class Phone
{
public:
	Phone(string name):Phonename(name)
	{
		cout << "Phone构造函数" << endl; 
	}
	string Phonename;
};
class Person
{
public:
	Person(string Per_name ,string Pho_name):Person_name(Per_name),P_Phone(Pho_name)
	{
		cout << "Person的构造函数" << endl; 
	}
	string Person_name;
	Phone P_Phone;
	
};
void test()
{
	Person p("Akebi","Komichi");\
	cout << p.Person_name << p.P_Phone.Phonename << endl;
	
}
 
int main()
{
	test();
	return 0;
}
