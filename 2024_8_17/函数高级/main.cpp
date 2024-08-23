#include <iostream>
using namespace std;
#include <stdio.h>


/* run this program using the console pauser or add your own getch, system("pause") or input loop */

////1、如果某个位置已经有了默认参数，那么从这个位置往后，从左到右都必须有默认值
////2、如果函数声明有默认参数，函数实现就不能有默认参数,声明和实现只能有一个有默认参数
//int fuc(int a = 10,int b = 10);
//
//int fuc(int a,int b)
//{	
//	return a + b; 
//}
//int main(int argc, char** argv) {
//	cout << fuc() << endl;
//	
//	return 0;
//}



////占位参数 
//占位参数还可以有默认参数
//void fuc(int a , int = 10)
//{
//	cout << "Aekbi" << endl;
//}
//int main()
//{
//	fuc(10,1);
//	return 0;
//} 

//void fuc()
//{
//	cout << "Akebi" << endl;
//}
//void fuc(int a)
//{
//	cout << "Komichi" << endl;
//}
//void fuc(double a)
//{
//	cout << "Hobert" << endl;
//}
//void fuc(double a , int b)
//{
//	cout << "VVV" << endl;
//}
//
//
//int main()
//{
//	fuc(3.14,10);	 
//	return 0;
//}

//函数重载的注意事项
//1、引用作为重载的条件 ,满足参数类型不同的函数重载条件 
void func(int &a)//int&a =10;不合法
{
	cout << "func（int&a）调用" << endl;
}

void func(const int &a)//cohst int &a = 10;合法 
{
	cout << "func(const int &a)调用" << endl;
}


//2、函数重载碰到默认参数,对于func2(10)会出现二义性报错 
void func2(int a ,int b = 10)
{
	cout << "func2(int a ,int b = 10)" << endl;
}
 
void func2(int a)
{
	cout << "func2(int a)" << endl;
}

int main()
{
	int a = 10; 	
	//func(a); //func（int&a）调用
	func(10);//func(const int &a)调用
	
	
	func2(10,20);
	return 0;
}



