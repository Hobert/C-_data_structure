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
//			cout << "�޲�" << endl;
//		}
//		Person(int a, int b)
//		{
//			age = a;
//			height = new int(b);
//			cout << "�в�" << endl; 
//		}
//		Person(const Person &p)
//		{
//			age = p.age;//������Ĭ��Ϊǳ���� 
//			height = new int(*p.height);//������� 
//			cout << "����" << endl;
//		}
//		
//		//���������������ɳ���Ա�ֶ��ͷ� 
//		~Person()
//		{
//			if (height != NULL)
//			{
//				delete height;
//				height = NULL;
//			}
//			cout << "��������" << endl;
//		}
//		int age;
//		int* height; 
//	
//};
//
////���ÿ�������ʼ��һ���¶��� 
//void test01()
//{
//	Person p1(18,172);
//	Person p2(p1);
//	cout << "p1��age��" <<  p1.age << endl;
//	cout << "p1��height��" <<  *p1.height << endl; 
//	cout << "p2��age��" <<  p2.age << endl;
//	cout << "p2��height��" <<  *p2.height << endl;
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
//	//Person p(1,2,3);//���캯��Ҫ�������� ,��һ�� 
//	Person p = Person(10,20,30);//�ڶ��� 
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
		cout << "Phone���캯��" << endl; 
	}
	string Phonename;
};
class Person
{
public:
	Person(string Per_name ,string Pho_name):Person_name(Per_name),P_Phone(Pho_name)
	{
		cout << "Person�Ĺ��캯��" << endl; 
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
