#include <iostream>
using namespace std;
#include <stdio.h>


/* run this program using the console pauser or add your own getch, system("pause") or input loop */

////1�����ĳ��λ���Ѿ�����Ĭ�ϲ�������ô�����λ�����󣬴����Ҷ�������Ĭ��ֵ
////2���������������Ĭ�ϲ���������ʵ�־Ͳ�����Ĭ�ϲ���,������ʵ��ֻ����һ����Ĭ�ϲ���
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



////ռλ���� 
//ռλ������������Ĭ�ϲ���
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

//�������ص�ע������
//1��������Ϊ���ص����� ,����������Ͳ�ͬ�ĺ����������� 
void func(int &a)//int&a =10;���Ϸ�
{
	cout << "func��int&a������" << endl;
}

void func(const int &a)//cohst int &a = 10;�Ϸ� 
{
	cout << "func(const int &a)����" << endl;
}


//2��������������Ĭ�ϲ���,����func2(10)����ֶ����Ա��� 
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
	//func(a); //func��int&a������
	func(10);//func(const int &a)����
	
	
	func2(10,20);
	return 0;
}



