#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//class Person
//{
//public:
//	//��̬��Ա����Ҳ���з���Ȩ�޵ģ��ⲿ�����Է���private 
//	static my_func()
//	{
//		age = 22;//��̬��Ա�������Է��ʾ�̬��Ա����
//		//��̬��Ա���������Է��ʷǾ�̬��Ա�������޷����ֵ������ĸ�����ĳ�Ա���� 
//	}
//	static int age;//��̬������Ҫд��public�� ��class�ĳ�Ա����Ĭ����private�ģ���Ҫ����Ȩ�޲ſ����������� 
//	//��̬��Ա����Ҳ���з���Ȩ�޵�
//};
//
//int Person::age = 18;//�������� 
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
//	Person::my_func();//ֱ��ͨ���������ʺ��� 
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
//	int age;//�Ǿ�̬��Ա����������Ķ�����
//	static int hei;//��̬��Ա�����������������
//	void my_func();//�Ǿ�̬��Ա�����������������
//	static void funv();//��̬��Ա������������Ķ�����
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
		//thisָ��ָ�򱻵��õĳ�Ա���������Ķ���
		this -> age = age;//�������Ա����Ա�������β�ͬ�����´������� 
	}
	Person& add_age(Person &p)//��������ķ���ֵ���Ͳ������ö���Person,��ᵼ����ʽ���ʧ�ܣ���Ϊ����ÿ�η��ض����������µ������ 
	{
		this -> age += p.age;
		return *this; 
		//thisָ��p2��ָ�룬��*thisָ��ľ���p2���������
	}
	int age;
};


void test01()
{
	Person p1(18);
	cout << p1.age << endl;
	Person p2(10);
	
	//��ʽ���
	p1.add_age(p2).add_age(p2);
	cout << p1.age << endl; 
}



int main()
{
	test01();
	
	return 0;
}
