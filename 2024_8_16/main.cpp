#include <iostream>
using namespace std;
#include <string.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void my_fuc(const int &a)
{
	//a = 1000;�����Խ����޸Ĳ������Ѿ���const������ 
	cout << "a = " << a << endl;
}

int main(int argc, char** argv) {
	
	
	//��������
	//ʹ�ó��������������βΣ���ֹ�����
	//int a = 10;
	
	//int  &ref=10��//���ñ�����һ��Ϸ����ڴ�ռ�,����ջ�������ݣ����������ǲ�����ֱ�ӱ����õ� ����˸��д������ 
	
	//�������Լ���const��ֱ������������ 
	//const int  &ref=10��
	//����const֮��I�������������޸�int temp = 10; const int & ref = temp;
	//ref=20��//����const֮���Ϊֻ�����������޸�
	
	
	int &ret = my_fuc();
	
	
	my_fuc() = 1000;
	cout << "ret = " << ret << endl;
	cout << "ret = " << ret << endl;
	return 0;
}
