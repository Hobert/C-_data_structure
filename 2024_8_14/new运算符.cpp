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
	
	delete p;//�ڴ��Ѿ����ͷţ��ٴη��ʾ��ǷǷ��������ᱨ����һ���ᱨ���������룩 
	cout << *p <<endl;
	
}
//2���ڶ�������new��������
void test2()
{
	//����10�������ݵ����飬�ڶ���
	int* arr = new int[10];//����������10��Ԫ��
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
