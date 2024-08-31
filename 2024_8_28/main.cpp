#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */


////继承的好处：减少重复代码
////语法：class子类：继承方式父类
////子类也称为派生类
////父类也称为基类
//class school
//{
//	public:
//		void name()
//		{
//			cout << "腊梅" << endl;
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
//	//父类中所有非静态成员属性都会被子类继承下去
//	//父类中私有成员属性是被编译器给隐藏了，因此是访问不到，但是确实被继承下去了	
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
//			cout << "Father的构造函数" << endl;
//		}
//		~Father()
//		{
//			cout << "Father的析构函数" << endl;
//		}
//	
//}; 
//
//class Son:public Father 
//{
//	public:
//		Son()
//		{
//			cout << "Son的构造函数" << endl;
//		}
//		~Son()
//		{
//			cout << "Son的析构函数" << endl;
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
//			cout << "Father的func函数" << endl;
//		}
//		void func(int a)
//		{
//			cout << "Father的func(int a)函数" << endl;
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
//			cout << "Son的func函数" << endl;
//		}
//		int m_age;	
//};
//
//void test01()
//{
//	Son s;
//	cout << s.m_age <<endl;//直接调用调用是子类中的同名成员
//	cout << s.Father::m_age << endl;
//	
//	s.func();
//	
//	//如果子类中出现和父类同名的成员函数，子类的同名成员会隐藏掉父类中所有同名成员函数
//	//如果想访问到父类中被隐藏的同名成员函数，需要加作用域
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
//			cout << "Father的函数" << endl; 
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
//			cout << "Son的函数" << endl; 
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
//	//1、通过对象访问
//	cout << "Son的m_age:" << s.m_age << endl;
//	cout << "Father的m_age:" << s.Father::m_age << endl;
//	//2、通过类名访问
//	cout << "Son的m_age:" << Son::m_age << endl;
//	//第一个：：代表通过类名方式访问第二个：：代表访问父类作用域下
//	cout << "Father的m_age:" << Son::Father::m_age << endl;
//	
//	
//	s.func();
//	//出现同名，子类会隐藏掉父类中所有同名成员函数，需要加作作用域访问
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
//	//当父类中出现同名成员，需要加作用域区分
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
////利用虚继承解决菱形继承的问题
////继承之前加上关键字virtual变为虚继承
////Animal类称为虚基类
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
//	//当菱形继承，两个父类拥有相同数据，需要加以作用域区分
//	cout << "Sheep的age:" << st.Sheep::m_age << endl;
//	cout << "Tuo的age:" << st.Tuo::m_age << endl;
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


//执行说话的函数
//地址早绑定在编译阶段确定函数地址
//如果想执行让猫说话，那么这个函数地址就不能提前绑定，需要在运行阶段进行绑定，地址晚绑定 
//我们希望传入什么对象，那么就调用什么对象的函数
//如果函数地址在编译阶段就能确定，那么静态联编
//如果函数地址在运行阶段才能确定，就是动态联编

//动态多态满足条件
//1、有继承关系
//2、子类重写父类的虚函数

//动态多态使用
//父类的指针或者引用 指向子类对象

class Animal
{
	public:
		virtual void speak()
		{
			cout << "山里有各种各样的声音" << endl;
		}
};

class Cat:public Animal//必须要有继承关系 
{
	public:
		
		//重写函数返回值类型函数名参数列表完全相同
		void speak()
		{
			cout << "这是哈基米" << endl; 
		} 
};
class Show:public Animal
{
	public:
		void speak()
		{
			cout << "这是雪豹" << endl; 
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

