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
//			cout << "age:" << m_age << endl;//�ڵ��ó�Ա����ʱ��ʵ������ʽ�ǣ�this->m_age, ����ʱpΪ��ָ�� ��thisҲ��һ����ָ�� 
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
//		//thisָ��ı�����ָ�볣��ָ���ָ���ǲ������޸ĵ�
//		//thisָ�벻�����޸�ָ���ָ���
//		//�ڳ�Ա���������const�����ε���thisָ����ָ��ָ���ֵҲ�������޸�
//		//�൱��const Person * const this
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
//		mutable int m_b = 20; //�����������ʹ�ڳ������У�Ҳ�����޸����ֵ,�ӹؼ���mutable
//};
//int main()
//{
//	//��������ʱ��ҪΪ��ָ��һ����ʼֵ��Ҫ���ͽ� m_age �� m_b ��ֵ��Ҫ��ʵ��������ʱд��const Person p = Person(); 
//	//��Ȼ�ᱨ�� 
//	const Person p;//�ڶ���ǰ��const����Ϊ������
//	p.my_add();
//	p.m_b = 50;//m_B������ֵ���ڳ�������Ҳ�����޸�
//	//p.test();//�����󲻿��Ե�����ͨ��Ա��������Ϊ��ͨ��Ա���������޸�����
//	return 0;
//} 


//----------------------------------------------------------------------------

//class school 
//{
//	friend void gay();
//	public:
//		school()
//		{
//			school_lou = "¥";
//			school_fang = "��"; 
//		}
//		
//	private:
//		string school_lou;
//		string school_fang;
//	
//};
//
////ȫ�ֺ��� 
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
			school_lou = "¥";
			school_fang = "��"; 
		}
		string school_lou;
	private:
		
		string school_fang;	
};

Gay::Gay()
{
	school = new School;//new School������乹�캯�� 
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
