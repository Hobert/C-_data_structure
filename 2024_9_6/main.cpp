#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */


////����һ��ģ�壬���߱�������������н����ŵ�T��Ҫ����T��һ��ͨ����������
//template<typename T>
//
//void my_replace(T &a ,T &b)
//{
//	T temp = a;
//	a = b;
//	b = temp;	
//} 
//
//void test01()
//{
//	int a = 10;
//	int b = 20;
//	//���ú���ģ�彻��
//	//���ַ�ʽʹ�ú���ģ��
//	//1���Զ������Ƶ�
////	my_replace(a,b);
//	
//	//2����ʾָ������
//	my_replace<int>(a,b);	
//	cout << "a = " << a << endl;
//	cout << "b = " << b << endl;
//}
//
//int main(int argc, char** argv) {
//	test01();
//	return 0;
//}


//------------------------------------------------------------------------------------

//template<typename T>
//void my_replace(T &a ,T &b)
//{
//	T temp = a;
//	a = b;
//	b = temp;
//}
//
////ѡ������ʵ�� 
//template<typename T>
//void my_sort(T arr[] ,int len)
//{
//	for(int i = 0 ;i < len ; i++)
//	{
//		int max = i;
//		
//		for(int j = i + 1; j<len;j++)
//		{
//			if(arr[max] < arr[j])//�����max����i����ᵼ���޷�ȡ��i������ֵ 
//			{
////				cout << max << endl; 
//				max = j;//�������ֵ�±�
//			}
//		}
//		my_replace(arr[i] , arr[max]);//��iλ�õ�Ԫ�ر�Ϊi֮�������Ԫ�ص����ֵ�������ʼi���� 
//	}
//} 
//
//
//template<typename T>
//void my_print(T arr,int len)
//{
//	for(int i = 0; i<len;i++)
//	{
//		cout << arr[i] ;
//	}
//	cout << endl;
//}
//
//
//
//void test01()
//{
//	char arr1[] = "akebiKomichi";
//	
//	int len = sizeof(arr1)/sizeof(arr1[0]);
//	
//	my_sort(arr1,len);
//	my_print(arr1,len);
//} 
//
//void test02()
//{
//	int arr2[] = {0,7,6,6,8,3,1,9,5};
//	int len = sizeof(arr2)/sizeof(arr2[0]);
//	my_sort(arr2,len);
//	my_print(arr2,len);
//}
//
//int main()
//{
//	test01();
//	test02();
//	return 0;
//}


//-----------------------------------------------------------------------------------

class Person
{
	public:
		Person(string name,int age)
		{
			this->m_age = age;
			this->m_name = name;
		} 
		string m_name;
		int m_age;
}; 
template<typename T>
bool my_com(T &p1,T &p2)
{
	if(p1 == p2)
	{
		return true;
	}
	else
	{
		return false;
	}
} 


template<> bool my_com(Person &p1,Person &p2)
{
	if(p1.m_age == p2.m_age)
	{
		return true;
	}
	else
	{
		return false;
	}
}

void test01()
{
	Person p1("Akebi",14);
	Person p2("Komichi",14);
	if(my_com(p1,p2))
	{
		cout << "p1 == p2" << endl;
	}
	else
	{
		cout << "p1 != p2" << endl;	
	}
}
int main()
{
	test01();
	return 0;
	
}
