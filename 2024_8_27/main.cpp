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
			return a+b;//���ﲻ�ܹ�ֱ�Ӵ�ӡa+b��ֵ������� 
		}
};


void test01()
{
	My_print my_print;
	//����()�Ĳ�����Ҳ��Ϊ�º���,д�����̶� 
	my_print("Akebi Komichi");
	
	My_add my_add;
	int ret  =  my_add(100,200); 
	cout << "ret:" << ret << endl; 
	
	//������������
	cout << My_add()(10,10) << endl;//���ͼ���С���Żᴴ���������� ���ص㣺��ǰ��ִ�����ˣ��������ͷ� 
}
int main(int argc, char** argv) {
	test01();
	
	return 0;
}
