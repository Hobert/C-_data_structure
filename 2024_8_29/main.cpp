#include <iostream>
using namespace std;
#include <string>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

//class Animal
//{
//	public:
//		virtual void speak()
//		{
//			cout << "ɽ���и��ָ���������" << endl;
//		}
//};
//
//class Cat:public Animal//����Ҫ�м̳й�ϵ 
//{
//	public:
//		
//		//��д��������ֵ���ͺ����������б���ȫ��ͬ
//		void speak()
//		{
//			cout << "���ǹ�����" << endl; 
//		} 
//};
//class Show:public Animal
//{
//	public:
//		void speak()
//		{
//			cout << "����ѩ��" << endl; 
//		} 
//};
//
//void doSpeak(Animal &animal)
//{
//	
//	animal.speak();
//}
//void test01()
//{
//	Cat cat;
//	doSpeak(cat); 
//	Show show;
//	doSpeak(show);
//	
//}
//int main()
//{
//	test01();
//	 
//	return 0;
//}

//-----------------------------------------------------------------------------------------



////�������չ�µĹ��ܣ������޸�Դ��
////�����ǿ��������ᳫ����ԭ��
////����ԭ�򣺶���չ���п��������޸Ľ��йر�
//
//
////ʵ�ּ�����������
//class AbstractComputer
//{
//	public:
//		virtual int getResult()
//		{
//			return 0;
//		}
//		int m_a;
//		int m_b;
//};
//class Add:public AbstractComputer
//{
//	public:
//		int getResult()
//		{
//			
//			return m_a + m_b; 
//		} 
//};
//class Minus:public AbstractComputer
//{
//	public:
//		int getResult()
//		{
//			
//			return m_a - m_b; 
//		} 
//};
//class Mul:public AbstractComputer
//{
//	public:
//		int getResult()
//		{
//			
//			return m_a * m_b; 
//		} 
//};
//
//void test01()
//{
//	
//	//��̬ʹ������
//	//����ָ���������ָ���������
//	AbstractComputer *ab;
//	ab = new Add;//���д���ͽ��麯�������˸��� 
//	ab->m_a = 10;
//	ab->m_b = 20;
//	cout << ab->m_a << "+" << ab->m_b << "=" <<  ab->getResult() << endl; 	
//	delete ab;//���ٶ������� 
//	
//	
//	ab = new Minus;//���д���ͽ��麯�������˸��� 
//	ab->m_a = 10;
//	ab->m_b = 20;
//	cout << ab->m_a << "-" << ab->m_b << "=" <<  ab->getResult() << endl; 	
//	delete ab;//���ٶ������� 
//	 
//	ab = new Mul;//���д���ͽ��麯�������˸��� 
//	ab->m_a = 10;
//	ab->m_b = 20;
//	cout << ab->m_a << "*" << ab->m_b << "=" <<  ab->getResult() << endl; 	
//	delete ab;//���ٶ������� 
//} 
//int main()
//{
//	test01();
//	
//	return 0;
//}



//------------------------------------------------------------------------------------------


//class Father
//{
//	public:
//		virtual void func() = 0;	
//};
//
//
//class Son1:public Father
//{
//	public:
//		virtual void func()//2����������������Ҫ��д�����еĴ��麯��������Ҳ���ڳ�����
//		{
//			cout << "Son1��func()" << endl; 
//			
//		}	
//};
//
//void test01()
//{
//	Father *ab = new Son1;
//	ab->func();
//}
//int main()
//{
//	test01();
//	return 0;
//}

//-----------------------------------------------------------------------------------------

//class Abstract
//{
//	public:
//		virtual void Boil() = 0;
//		virtual void Brew() = 0;
//		virtual void PourInCup() = 0;
//		virtual void plus() = 0;
//		void makedrink()
//		{
//			Boil();
//			Brew();
//			PourInCup();
//			plus();		
//		}
//}; 
//
//class Coffee:public Abstract
//{
//	public:
//		void Boil()
//		{
//			cout << "��ˮ" << endl;
//		};
//		void Brew()
//		{
//			cout << "���ݿ���" << endl;
//		};
//		void PourInCup()
//		{
//			cout << "���뱭��" << endl;
//		};
//		void plus()
//		{
//			cout << "�����Ǻ�ţ��" << endl;
//		};	
//};
//
//class Tea:public Abstract
//{
//	public:
//		void Boil()
//		{
//			cout << "��ˮ" << endl;
//		};
//		void Brew()
//		{
//			cout << "���ݲ�Ҷ" << endl;
//		};
//		void PourInCup()
//		{
//			cout << "���뱭��" << endl;
//		};
//		void plus()
//		{
//			cout << "�������" << endl;
//		};
//};
//
//void work(Abstract* ab)
//{
//	ab->makedrink();
//	delete ab;
//}
//
//void test01()
//{
//	work(new Coffee);
//	
//	work(new Tea);
//} 
//
//int main()
//{
//	test01();
//	return 0;
//}

//----------------------------------------------------------------------------------------------


//class Father
//{
//	public:
//		Father()
//		{
//			cout << "Father�Ĺ��캯��" << endl;
//		}
//		
//		//ʵ����������������Ŀ�ģ��������ָ���޷����������������޷��ͷ������еĶ�������	
//	
////		//�������������Խ������ָ���ͷ��������ʱ���ɾ�������
////		virtual ~Father()
////		{
////			cout << "Father����������" << endl;
////		}
//	
//		//�������ʹ������������ڲ�����Ҫһ���ĺ���ʵ�֣���Ȼ�����ڲ����ܿ��ٵĶ��������޷����ͷ� 
//		
//		//����������Ҫ����Ҳ��Ҫʵ��
//		//���˴�������֮��.�������Ҳ���ڳ����࣬�޷�ʵ��������
//		virtual ~Father() = 0;
//		
//		virtual void speak() = 0;
//};
//
//Father::~Father()
//{
//	cout << "Father�Ĵ�����������" << endl;
//}
//
//class Son:public Father
//{
//	public:
//		Son(string name)
//		{
//			m_name = new string(name);
// 			cout << "Son�Ĺ��캯��" << endl; 
//		}
//		~Son()
//		{
//			
//			cout << "Son����������" << endl;
//			if(m_name != NULL)
//			{
//				delete m_name;
//				m_name = NULL;
//			}
//		}
//		void speak()
//		{
//			
//			cout << *m_name <<  "��������" << endl;
//		}
//		
//		string* m_name;
//};
//
//void test01()
//{
//	Father * ab = new Son("Akebi");
//	ab->speak();
//	//����ָ��������ʱ�򲻻��������������������������������ж������ԣ������ڴ�й©
//	delete ab;//��Ҫ�Զ������ݽ����ͷ� 
//	
//}
// 
//int main()
//{
//	test01();
//	return 0;
//}

//---------------------------------------------------------------------------------- 

class CPU_Abstract
{
	public:
		virtual void factory() = 0;
		virtual void work() = 0;
};
class Card_Abstract
{
	public:
		virtual void factory() = 0;
		virtual void work() = 0;
};
class Memory_Abstract
{
	public:
		virtual void factory() = 0;
		virtual void work() = 0;
};

class CPU_Intel:public CPU_Abstract
{
	public:
		void factory()
		{
			cout << "Intel��������" << endl;
		}
		void work()
		{
			cout << "CPU����" << endl;
		}	
};

class Card_huashuo:public Card_Abstract
{
	public:
		void factory()
		{
			cout << "��˶��������" << endl;
		}
		void work()
		{
			cout << "�Կ����ȿ�ʼת��" << endl;
		}	
};

class Memory_caihong:public Memory_Abstract
{
	public:
		void factory()
		{
			cout << "�߲ʺ繤������" << endl;
		}
		void work()
		{
			cout << "�ڴ汬��" << endl;
		}	
};

class Computer
{
	public:
		void print_messages(CPU_Abstract* cpu,Card_Abstract* card,Memory_Abstract* memory)
		{
			cpu->factory();
			card->factory();
			memory->factory();
		} 
		void processing(CPU_Abstract* cpu,Card_Abstract* card,Memory_Abstract* memory)
		{
			cpu->work();
			card->work();
			memory->work();
		}
	
}; 
void test01()
{
	Computer c;
	c.print_messages(new CPU_Intel ,new Card_huashuo ,new Memory_caihong);
	c.processing(new CPU_Intel ,new Card_huashuo ,new Memory_caihong);
}
int main()
{
	test01();
	return 0;
}
