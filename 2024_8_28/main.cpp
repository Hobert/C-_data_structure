#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */


////�̳еĺô��������ظ�����
////�﷨��class���ࣺ�̳з�ʽ����
////����Ҳ��Ϊ������
////����Ҳ��Ϊ����
//class school
//{
//	public:
//		void name()
//		{
//			cout << "��÷" << endl;
//		}
//		void address()
//		{
//			cout << "mountain" << endl;
//		}
//}; 
//
//class Akebi:public school
//{
//	public:
//		void show_message()
//		{
//			cout << "age:" << m_age << endl;
//		}
//		int m_age = 14;
//	
//	
//};
//class Komichi:public school
//{
//	public:
//		void show_message()
//		{
//			cout << "age:" << m_age << endl;
//		}
//		int m_age = 14;
//		
//	
//};
//void test01()
//{
//	Akebi akebi;
//	akebi.show_message();
//	akebi.name();
//	akebi.address();
//	Komichi komichi;
//	komichi.show_message();
//	komichi.name();
//	komichi.address();
//}
//int main(int argc, char** argv) {
//	test01();
//	return 0;
//}


//-----------------------------------------------------------------------------------------------------
//class Person
//{
//	public:
//		int m_a = 10;
//	protected:
//		int m_b = 20;
//	private:
//		int m_c = 30;
//};
//class son1:public Person
//{
//	public:
//		void my_func()
//		{
//			cout << m_a << endl;
//			cout << m_b << endl;
//			//cout << m_c << endl;
//		}
//		 	
//}; 
//
//class son2:protected Person
//{
//	public:
//		void my_func()
//		{
//			cout << m_a << endl;
//			cout << m_b << endl;
//			//cout << m_c << endl;
//		}	 	
//};
//
//
//class son3:private Person
//{
//	public:
//		void my_func()
//		{
//			cout << m_a << endl;
//			cout << m_b << endl;
//			//cout << m_c << endl;
//		}
//		 	
//};
//
//void test01()
//{
//	son1 s;
//	s.my_func();
//}
//
//void test02()
//{
//	son2 s;
//	s.my_func();
//}
//
//void test03()
//{
//	son3 s;
//	s.my_func();
//}
//
//int main()
//{
//	//test01();
//	//test02();
//	test03();
//	return 0;
//}


//-------------------------------------------------------------------------
//class Father
//{
//	public:
//		int m_a;
//	protected:
//		int m_b;
//	private:
//		int m_c;
//};
//class Son:public Father
//{
//	public:
//		int m_d;
//}; 
//void test01()
//{
//	
//	//16
//	//���������зǾ�̬��Ա���Զ��ᱻ����̳���ȥ
//	//������˽�г�Ա�����Ǳ��������������ˣ�����Ƿ��ʲ���������ȷʵ���̳���ȥ��	
//	cout << sizeof(Son) <<endl;
//}
//int main()
//{
//	test01();
//	return 0;
//}

//--------------------------------------------------------------------------------------------------------



//class Father
//{
//	public:
//		Father()
//		{
//			cout << "Father�Ĺ��캯��" << endl;
//		}
//		~Father()
//		{
//			cout << "Father����������" << endl;
//		}
//	
//}; 
//
//class Son:public Father 
//{
//	public:
//		Son()
//		{
//			cout << "Son�Ĺ��캯��" << endl;
//		}
//		~Son()
//		{
//			cout << "Son����������" << endl;
//		}
//};
//void test01()
//{
//	Son s1;
//}
//int main()
//{
//	test01();
//	return 0;
//	
//}



//----------------------------------------------------------------------------------------------

//class Father
//{
//	public:
//		Father()
//		{
//			m_age = 100;			
//		}
//		void func()
//		{
//			cout << "Father��func����" << endl;
//		}
//		void func(int a)
//		{
//			cout << "Father��func(int a)����" << endl;
//		}
//		int m_age;	
//};
//
//class Son:public Father 
//{
//	public:
//		Son()
//		{
//			m_age = 200;			
//		}
//		
//		void func()
//		{
//			cout << "Son��func����" << endl;
//		}
//		int m_age;	
//};
//
//void test01()
//{
//	Son s;
//	cout << s.m_age <<endl;//ֱ�ӵ��õ����������е�ͬ����Ա
//	cout << s.Father::m_age << endl;
//	
//	s.func();
//	
//	//��������г��ֺ͸���ͬ���ĳ�Ա�����������ͬ����Ա�����ص�����������ͬ����Ա����
//	//�������ʵ������б����ص�ͬ����Ա��������Ҫ��������
//	s.Father::func(10);
//	
//	s.Father::func();
//}
//
//int main()
//{
//	test01();
//	
//	return 0;
//}


//----------------------------------------------------------------------------------------------------
//class Father
//{
//	public:
//		static int m_age;
//		static void func()
//		{
//			cout << "Father�ĺ���" << endl; 
//		}
//};
//int Father::m_age = 100;
//
//class Son:public Father
//{
//	public:
//		static int m_age;
//		static void func()
//		{
//			cout << "Son�ĺ���" << endl; 
//		}
//	
//};
//int Son::m_age = 200;
//
//
//
//void test01()
//{
//	
//	Son s;
//	//1��ͨ���������
//	cout << "Son��m_age:" << s.m_age << endl;
//	cout << "Father��m_age:" << s.Father::m_age << endl;
//	//2��ͨ����������
//	cout << "Son��m_age:" << Son::m_age << endl;
//	//��һ����������ͨ��������ʽ���ʵڶ�������������ʸ�����������
//	cout << "Father��m_age:" << Son::Father::m_age << endl;
//	
//	
//	s.func();
//	//����ͬ������������ص�����������ͬ����Ա��������Ҫ�������������
//	s.Father::func();
//	
//}
//
//int main()
//{
//	test01();
//	return 0;
//}



//----------------------------------------------------------------------------------------------
//class Father1
//{
//	public:
//		
//		int m_a = 10;
//};
//class Father2
//{
//	public:
//		
//		int m_b = 20;
//};
//
//class Son:public Father1,public Father2
//{
//	public:
//		int m_c = 30;
//		int m_d = 40;
//};
//void test01()
//{
//	//�������г���ͬ����Ա����Ҫ������������
//	Son s;
//	cout << "m_a:" << s.m_a << endl; 
//	cout << "m_b:" << s.m_b << endl;
//	cout << "m_c:" << s.m_c << endl;
//	cout << "m_d:" << s.m_d << endl;
//}
//
//int main()
//{
//	test01();
//	return 0;
// } 

//---------------------------------------------------------------------------
//class Animal
//{
//	public:
//		int m_age = 20;
//}; 
//
////������̳н�����μ̳е�����
////�̳�֮ǰ���Ϲؼ���virtual��Ϊ��̳�
////Animal���Ϊ�����
//class Sheep :virtual public Animal
//{
//	
//};
//class Tuo :virtual public Animal
//{
//	
//};
//
//class SheepTuo : public Sheep,public Tuo
//{
//	
//};
//
//void test01()
//{
//	SheepTuo st;
//	
//	st.Sheep::m_age = 30;
//	st.Tuo::m_age = 10;
//	//�����μ̳У���������ӵ����ͬ���ݣ���Ҫ��������������
//	cout << "Sheep��age:" << st.Sheep::m_age << endl;
//	cout << "Tuo��age:" << st.Tuo::m_age << endl;
//}
//
//
//
//int main()
//{
//	test01();
//	return 0;
//}


//-----------------------------------------------------------------------------------------------------


//ִ��˵���ĺ���
//��ַ����ڱ���׶�ȷ��������ַ
//�����ִ����è˵������ô���������ַ�Ͳ�����ǰ�󶨣���Ҫ�����н׶ν��а󶨣���ַ��� 
//����ϣ������ʲô������ô�͵���ʲô����ĺ���
//���������ַ�ڱ���׶ξ���ȷ������ô��̬����
//���������ַ�����н׶β���ȷ�������Ƕ�̬����

//��̬��̬��������
//1���м̳й�ϵ
//2��������д������麯��

//��̬��̬ʹ��
//�����ָ��������� ָ���������

class Animal
{
	public:
		virtual void speak()
		{
			cout << "ɽ���и��ָ���������" << endl;
		}
};

class Cat:public Animal//����Ҫ�м̳й�ϵ 
{
	public:
		
		//��д��������ֵ���ͺ����������б���ȫ��ͬ
		void speak()
		{
			cout << "���ǹ�����" << endl; 
		} 
};
class Show:public Animal
{
	public:
		void speak()
		{
			cout << "����ѩ��" << endl; 
		} 
};

void doSpeak(Animal &animal)
{
	
	animal.speak();
}
void test01()
{
	Cat cat;
	doSpeak(cat); 
	Show show;
	doSpeak(show);
	
}
int main()
{
	test01();
	 
	return 0;
}

