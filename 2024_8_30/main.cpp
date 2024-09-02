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
//		cout << "文件打开失败" << endl;
//		return;
//	}
//	char data[1024];
//	//第一种 
////	while(ifs >> data)//当扫描并写入完后，返回False
////	{
////		cout << data << endl;
////	}
//	
//	//第二种 
////	while(ifs.getline(data,sizeof(data)))
////	{
////		cout << data << endl; 
////	}
//
//	//第三种 
////	string my_str;
////	while(getline(ifs,my_str))//利用全局函数 
////	{
////		cout << my_str << endl;
////	}
//	
//	//第四种//一个个读出字符 
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
//	//2、创建流对象
//	//ofstreamn ofs("person.txt",ios::out | ios::binary);//可以在创建对象的时候，进行模式选择和文件名写入 
//	ofstream ofs;
//	ofs.open("Person.txt",ios::binary | ios::out);//也可以使用write进行模式选择和文件名写入
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
		cout << "文件打开失败" << endl;
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
