#include <iostream>
using namespace std; 
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

template<class T>
class Base
{
	T F_name; 
};

template<class T1,class T2>
class Son:public Bace<T2>
{
	
	public:
		Son()
		{
			cout << "T的数据类型" << typeid(T1).name() << endl;
			cout << "T的数据类型" << typeid(T2).name() << endl;
		}	
		
	T1 S_name;
	 
};

void test01()
{
	Son<int , char> son;
	
}
int main(int argc, char** argv) {
	test01();
	return 0;
}
