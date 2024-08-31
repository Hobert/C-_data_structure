#include <iostream>
using namespace std;
#include <string>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

//class Animal
//{
//	public:
//		virtual void speak()
//		{
//			cout << "山里有各种各样的声音" << endl;
//		}
//};
//
//class Cat:public Animal//必须要有继承关系 
//{
//	public:
//		
//		//重写函数返回值类型函数名参数列表完全相同
//		void speak()
//		{
//			cout << "这是哈基米" << endl; 
//		} 
//};
//class Show:public Animal
//{
//	public:
//		void speak()
//		{
//			cout << "这是雪豹" << endl; 
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



////如果想扩展新的功能，需求修改源码
////在真是开发中中提倡开闭原则
////开闭原则：对扩展进行开发，对修改进行关闭
//
//
////实现计算器抽象类
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
//	//多态使用条件
//	//父类指针或者引用指向子类对象
//	AbstractComputer *ab;
//	ab = new Add;//该行代码就将虚函数进行了覆盖 
//	ab->m_a = 10;
//	ab->m_b = 20;
//	cout << ab->m_a << "+" << ab->m_b << "=" <<  ab->getResult() << endl; 	
//	delete ab;//销毁堆区数据 
//	
//	
//	ab = new Minus;//该行代码就将虚函数进行了覆盖 
//	ab->m_a = 10;
//	ab->m_b = 20;
//	cout << ab->m_a << "-" << ab->m_b << "=" <<  ab->getResult() << endl; 	
//	delete ab;//销毁堆区数据 
//	 
//	ab = new Mul;//该行代码就将虚函数进行了覆盖 
//	ab->m_a = 10;
//	ab->m_b = 20;
//	cout << ab->m_a << "*" << ab->m_b << "=" <<  ab->getResult() << endl; 	
//	delete ab;//销毁堆区数据 
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
//		virtual void func()//2、抽象类的子类必须要重写父类中的纯虚函数，否则也属于抽象类
//		{
//			cout << "Son1的func()" << endl; 
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
//			cout << "倒水" << endl;
//		};
//		void Brew()
//		{
//			cout << "冲泡咖啡" << endl;
//		};
//		void PourInCup()
//		{
//			cout << "倒入杯中" << endl;
//		};
//		void plus()
//		{
//			cout << "加入糖和牛奶" << endl;
//		};	
//};
//
//class Tea:public Abstract
//{
//	public:
//		void Boil()
//		{
//			cout << "倒水" << endl;
//		};
//		void Brew()
//		{
//			cout << "冲泡茶叶" << endl;
//		};
//		void PourInCup()
//		{
//			cout << "倒入杯中" << endl;
//		};
//		void plus()
//		{
//			cout << "加入枸杞" << endl;
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
//			cout << "Father的构造函数" << endl;
//		}
//		
//		//实现虚析构或纯虚析构目的：解决父类指针无法访问子类析构，无法释放子类中的堆区数据	
//	
////		//利用虚析构可以解决父类指针释放子类对象时不干净的问题
////		virtual ~Father()
////		{
////			cout << "Father的析构函数" << endl;
////		}
//	
//		//虚析构和纯虚析构函数内部都需要一定的函数实现，不然父类内部可能开辟的堆区数据无法被释放 
//		
//		//纯虚析构需要声明也需要实现
//		//有了纯虚析构之后.，这个类也属于抽象类，无法实例化对象
//		virtual ~Father() = 0;
//		
//		virtual void speak() = 0;
//};
//
//Father::~Father()
//{
//	cout << "Father的纯虚析构函数" << endl;
//}
//
//class Son:public Father
//{
//	public:
//		Son(string name)
//		{
//			m_name = new string(name);
// 			cout << "Son的构造函数" << endl; 
//		}
//		~Son()
//		{
//			
//			cout << "Son的析构函数" << endl;
//			if(m_name != NULL)
//			{
//				delete m_name;
//				m_name = NULL;
//			}
//		}
//		void speak()
//		{
//			
//			cout << *m_name <<  "是我涝坡" << endl;
//		}
//		
//		string* m_name;
//};
//
//void test01()
//{
//	Father * ab = new Son("Akebi");
//	ab->speak();
//	//父类指针在析构时候不会调用子类中析构函数，导致子类如果有堆区属性，出现内存泄漏
//	delete ab;//需要对堆区数据进行释放 
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
			cout << "Intel工厂生产" << endl;
		}
		void work()
		{
			cout << "CPU烤肉" << endl;
		}	
};

class Card_huashuo:public Card_Abstract
{
	public:
		void factory()
		{
			cout << "华硕工厂生产" << endl;
		}
		void work()
		{
			cout << "显卡风扇开始转了" << endl;
		}	
};

class Memory_caihong:public Memory_Abstract
{
	public:
		void factory()
		{
			cout << "七彩虹工厂生产" << endl;
		}
		void work()
		{
			cout << "内存爆了" << endl;
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
