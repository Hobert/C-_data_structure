#include <iostream>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
class My_print
{
	public:
		void operator()(string my_str)
		{
			cout << my_str << endl; 
		}
};

class My_add
{
	public:
		int operator()(int a ,int b)
		{
			return a+b;//这里不能够直接打印a+b的值，会出错 
		}
};


void test01()
{
	My_print my_print;
	//重载()的操作符也称为仿函数,写法不固定 
	my_print("Akebi Komichi");
	
	My_add my_add;
	int ret  =  my_add(100,200); 
	cout << "ret:" << ret << endl; 
	
	//匿名函数对象
	cout << My_add()(10,10) << endl;//类型加上小括号会创建匿名对象 ，特点：当前行执行完了，立即被释放 
}
int main(int argc, char** argv) {
	test01();
	
	return 0;
}
