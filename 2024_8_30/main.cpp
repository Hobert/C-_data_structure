#include <iostream>
using namespace std;
#include <fstream>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//void test01()
//{
//	ofstream ofs;
//	ofs.open("test.txt" , ios::out);
//	ofs << "Akebi" << endl;
//	ofs << "Komichi" << endl;
//	ofs.close();
//}
//
//void test02()
//{
//	ifstream ifs;
//	ifs.open("test.txt",ios::in);
//	if(!ifs.is_open())
//	{
//		cout << "�ļ���ʧ��" << endl;
//		return;
//	}
//	char data[1024];
//	//��һ�� 
////	while(ifs >> data)//��ɨ�貢д����󣬷���False
////	{
////		cout << data << endl;
////	}
//	
//	//�ڶ��� 
////	while(ifs.getline(data,sizeof(data)))
////	{
////		cout << data << endl; 
////	}
//
//	//������ 
////	string my_str;
////	while(getline(ifs,my_str))//����ȫ�ֺ��� 
////	{
////		cout << my_str << endl;
////	}
//	
//	//������//һ���������ַ� 
//	char c; 
//	while((c = ifs.get()) != EOF)
//	{
//		cout << c ;
//	}
//	
//	ifs.close();
//}
//int main(int argc, char** argv) {
//	//test01();
//	test02();
//	return 0;
//}

//---------------------------------------------------------------------------

//class Person
//{
//	public:
//		char name[1024];
//		int m_age;
//};
//
//void test01()
//{
//	
//	//2������������
//	//ofstreamn ofs("person.txt",ios::out | ios::binary);//�����ڴ��������ʱ�򣬽���ģʽѡ����ļ���д�� 
//	ofstream ofs;
//	ofs.open("Person.txt",ios::binary | ios::out);//Ҳ����ʹ��write����ģʽѡ����ļ���д��
//	Person p = {"Akebi Komichi" , 14};
////	p.m_age = 14;
////	p.name = "Akebi";
//	ofs.write((const char*)&p,sizeof(Person));
//	ofs.close();
//} 
//
//int main()
//{
//	test01();
//	return 0;
//} 

//---------------------------------------------------------------------------

class Person
{
	public:
		char m_name[1024];
		int m_age;	
};

void test01()
{
	ifstream ifs;
	ifs.open("Person.txt" , ios::in | ios::binary);
	Person p;
	ifs.read((char*)&p , sizeof(Person));
	if(!ifs.is_open())
	{
		cout << "�ļ���ʧ��" << endl;
		return;
	}
	cout << p.m_age << endl;
	cout << p.m_name << endl; 
	ifs.close();
}


int main()
{
	test01();
	return 0;
}
