#include <iostream>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//class Person
//{
//	
//	public:
////		Person operator+(Person &p)
////		{
////			Person temp;
////			temp.m_a = this->m_a + p.m_a;
////			temp.m_b = this->m_b + p.m_b;
////			return temp;		
////		} 
//		int m_a = 10;
//		int m_b = 10;
//};
//
//Person operator+(Person p1,Person p2)
//{
//	
//	Person temp;
//	temp.m_a = p1.m_a + p2.m_b;
//	temp.m_b = p1.m_b + p2.m_b;
//	return temp;
//} 
//
//
//Person operator+(Person p1,int num)
//{
//	
//	
//	Person temp;
//	temp.m_a = p1.m_a + num;
//	temp.m_b = p1.m_b + num;
//	return temp;
//	
//} 
//
//
//void test01()
//{
//	
//	Person p1;
//	Person p2;
//	
//	//成员函数重载本质调用
//	//Person p3 = p1.operator+(p2);
//	
//	//全局函数重载本质调用
//	//Person p3 = operator+(p1, p2);
//	
//	Person p3 = p1 + p2;
//	Person p4 = p1 + 100;
//	
//	cout << "p3.m_a:" << p3.m_a << endl;
//	cout << "p3.m_b:" << p3.m_b << endl;
//	
//	cout << "p4.m_a:" << p4.m_a << endl;
//	cout << "p4.m_b:" << p4.m_b << endl;
//}
//
//
//int main(int argc, char** argv) {
//	test01();
//	
//	return 0;
//}


//------------------------------------------------------------------------------------------

//class Person
//{
//	//利用成员函数重载左移运算符p.operator<<(cout)简化版本为p << cout
//	//不会利用成员函数重载<<运算符，因为无法实现cout在左侧
//	//void operator<<( cout )
//
//	friend ostream operator<<(ostream &cout ,Person &p);
//	
//	private:
//		int m_a;
//		int m_b;
//		
//};
//
//ostream& operator<<(ostream &cout ,Person &p)
//{
//	cout << "m_a:" << p.m_a << "m_b:" << p.m_b;
//	return cout;
//}
//
//int main()
//{
//	Person p;
//	
//	cout << p << endl;//输出打印体现一种链式编程思想 
//	
//	return 0;
//}


//-----------------------------------------------------------------------------------------
class My_int
{
	
	public:
		My_int()
		{
			this->m_value = 0;
			
		}
		
		//前置递增重载
		//前置返回值类型必须是引用，这样可以输出打印多次前置++，且始终作用于同一个变量，如：++(++i); 
		
		My_int& operator++()
		{

			this->m_value++;
			return *this;
		}
		
		//后置递增重载
		//为了区分前置和后置函数重载，需要使用占位参数int,只能使用int，使用其他的数据类型会报错 
		//这里返回值不能写成引用，因为这里的temp是局部变量在函数结束后释放堆区内存，再进行调用会报错
		
		My_int operator++(int) 
		{
			
			//先记录当时结果
			
			//后递增
			
			//最后将记录结果做返回
			
			My_int temp = *this;//先将未++的保存起来
			
			m_value++;
			return temp;
		}
		
		int m_value;	
};

void test01()
{
	My_int i;
	++i;
	cout << i.m_value << endl;
	i++; 
	cout << i.m_value << endl;
	
}

int main()
{
	test01();
	
	 
	
	return 0;
} 
