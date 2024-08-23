#include <iostream>
using namespace std;
#include <string.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void my_fuc(const int &a)
{
	//a = 1000;不可以进行修改操作，已经被const修饰了 
	cout << "a = " << a << endl;
}

int main(int argc, char** argv) {
	
	
	//常量引用
	//使用场景：用来修饰形参，防止误操作
	//int a = 10;
	
	//int  &ref=10；//引用必须引一块合法的内存空间,比如栈区的数据，而字面量是不允许直接被引用的 ，因此该行代码错误 
	
	//不过可以加上const来直接引用字面量 
	//const int  &ref=10；
	//加上const之后I编译器将代码修改int temp = 10; const int & ref = temp;
	//ref=20；//加入const之后变为只读，不可以修改
	
	
	int &ret = my_fuc();
	
	
	my_fuc() = 1000;
	cout << "ret = " << ret << endl;
	cout << "ret = " << ret << endl;
	return 0;
}
