#include <iostream>
using namespace std;
#include <string.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int* my_fuc()
{
	int* p = new int(10);
	return p;
	
} 


void test1()
{
	int * p = my_fuc();
	
	cout << *p <<endl;
	
	delete p;//内存已经被释放，再次访问就是非法操作，会报错（不一定会报错，但会乱码） 
	cout << *p <<endl;
	
}
//2、在堆区利用new开辟数组
void test2()
{
	//创建10整型数据的数组，在堆区
	int* arr = new int[10];//代表数组有10个元素
	for(int i = 0;i<10;i++)
	{
		arr[i] = i;
	}
	for(int i = 0;i<10;i++)
	{
		cout << arr[i] << endl;
	}
	delete[] arr;
	for(int i = 0;i<10;i++)
	{
		cout << arr[i] << endl;
	}
}

int main(int argc, char** argv) {
	test1();
	
	test2();
	return 0;
}
