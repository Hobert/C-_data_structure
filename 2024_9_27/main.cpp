#include <iostream>
using namespace std;
#include <vector>//使用vector记得引用头文件 

#include <string> 
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

//class Person
//{
//	public:
//		Person(string name,int age)
//		{
//			this->m_age = age;
//			this->m_name = name;
//		}
//	
//		string m_name;
//		int m_age;	
//};
//
//void test01()
//{
//	vector<Person> v;
//	
//	Person p1("Aekbi",14);
//	Person p2("Komichi",15);
//	Person p3("Hobert",21);
//	
//	v.push_back(p1);
//	v.push_back(p2);
//	v.push_back(p3);
//	
//	for(vector<Person>::iterator itbegin = v.begin();itbegin != v.end();itbegin++)
//	{
//		cout << (*itbegin).m_name << (*itbegin).m_age << endl;
//	}
//	
//}
//
//
//void test02()
//{
//	vector<Person*> v;
//	
//	Person p1("Aekbi",14);
//	Person p2("Komichi",15);
//	Person p3("Hobert",21);
//	
//	v.push_back(&p1);
//	v.push_back(&p2);
//	v.push_back(&p3);
//	
//	for(vector<Person*>::iterator itbegin = v.begin();itbegin != v.end();itbegin++)
//	{
//		cout << (*itbegin)->m_name << (*itbegin)->m_age << endl;
//	}
//	
//}
//
//int main(int argc, char** argv) {
//	test02();
//	return 0;
//}


//-------------------------------------------------------------------------------------------------------------

//void test01()
//{
//	vector< vector<int> > v;//  >>两个> > 不能直接放在一起，否则会造成识别为右移运算符 
//	vector<int> v1;
//	vector<int> v2;
//	vector<int> v3;
//	for(int i = 0;i<10;i++)
//	{
//		v1.push_back(i);
//		v2.push_back(i);
//		v3.push_back(i);
//	}
//	v.push_back(v1);
//	v.push_back(v2);
//	v.push_back(v3);
//	for( vector< vector<int> >::iterator itbegin = v.begin();itbegin != v.end();itbegin++)
//	{
//		for(vector<int>::iterator it = (*itbegin).begin();it != (*itbegin).end();it++)//这里的itbegin需要解引用才能作为vector使用 
//		{
//			cout << *it << " ";
//		}
//		cout << endl;
//	}
//}
//int  main()
//{
//	test01();
//	
//	return 0;
//}

//-------------------------------------------------------------------------------------------------------------


//void test01()
//{
//	const char* s = "Akebi Komichi";
//	
//	string s1(s);
//	string s2(s1);
//	string s3(10,'a');
//	cout << "s1:" << s1 << endl;
//	cout << "s2:" << s2 << endl;
//	cout << "s3:" << s3 << endl;
//	
//}
//int main()
//{
//	test01();
//	
//	return 0;
// } 
// 
 

//----------------------------------------------------------------------------------------

//void test01()
//{
//	string s1;
//	s1 = "Akebi Komichi";
//	cout << "s1 = " << s1 << endl;
//	
//	string s2;
//	s2 = s1;
//	cout << "s2 = " << s2 << endl;
//	
//	string s3;
//	s3 = 'a';
//	cout << "s3 = " << s3 << endl;
//	
//	string s4;
//	s4.assign("Akebi");//使用点操作符使用调用函数 
//	cout << "s4 = " << s4 << endl;
//	
//	string s5;
//	s5.assign("Akebi Komichi",5);
//	cout << "s5 = " << s5 << endl;
//	
//	string s6;
//	s6.assign(s5);
//	cout << "s6 = " << s6 << endl;
//	
//	string s7;
//	s7.assign(10,'b');
//	cout << "s7 = " << s7 << endl;
//	 
//}
//
//
//int main()
//{
//	test01();
//	return 0;
//}

//------------------------------------------------------------------------------------------------------------- 

//void test01()
//{
//	string s1;
//	s1 +="Akebi";
//	cout << "s1 = " << s1 << endl;
//	
//	string s2;
//	s2 +='A';
//	cout << "s2 =  " << s2 << endl;
//	 
//	string s3;
//	s3 += s2;
//	cout << "s3 = " << s3 << endl;
//	
//	string s4;
//	s4.append(s3);
//	cout << "s4 = " << s4 << endl;
//
//	string s5;
//	s5.append("Komichi" , 3);
//	cout << "s5 = " << s5 << endl;
//	
//	string s6;
//	s6.append("Akebi");
//	cout << "s6 = " << s6 << endl;
//	
//	string s7;
//	s7.append("Akebi",2,3);
//	cout << "s7 = " << s7 << endl;
//
//}
//
//
//
//
//
//int main()
//{
//	test01();
//	
//	
//	
//	return 0;
//} 




 
 
 
//------------------------------------------------------------------------------------------------------------- 




void test01()
{
	string s1;
	s1 = "Akebi Komichi";
	int pos = s1.find("mi");
	cout << "pos = " << pos << endl;
	 
	s1.replace(1,2,"Ho");
	cout << "s1 = " << s1 << endl;
}

int main()
{
	test01();
	return 0;
}
 
 
 
 
 
 
 
 
 
 
 
 
