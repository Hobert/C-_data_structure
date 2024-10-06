#include <iostream>
#include <stdio.h>
using namespace std;

////第一题 
//string bublesort(string str,int lens)//形式传参，以相同类型string进行接收结果 
//{
//	for(int i = 0;i < lens;i++)//首层循环确定比较参数1 
//	{
//		for(int j = i+1;j<lens;j++)//内层循环确定比较参数2 
//		{
//			if(str[i]<str[j])
//			{
//				//交换数值 
//				char temp = str[i];
//				str[i] = str[j];
//				str[j] = temp;
//			}	
//		}
//	}
//	return str;
//}
//int main()
//{
//	string s1 = "dBadaAcvz";//设置字符串
//	int len = sizeof(s1); 
//	string s2 = bublesort(s1,len);//函数采用形式传参，另设s2变量用于接收排序的结果 
//	char arr[len];//定义空数组 
//	for(int i = 0;i<len; i++)
//	{
//		arr[i] = s2[i];//将数据存入数组中 
//	}
//	for(int i = 0;i<len; i++)
//	{
//		cout << arr[i] << endl;//打印数组 
//	}
//	return 0;
//}



//----------------------------------------------------------------------------------------------------------
//第二题 
//int countstring(char* str)
//{
//	int count;
//	
//	for(int i = 0;str[i] != '\0';i++)
//	{
//		count++;
//	}
//	
//	return count;
//}
//
//int main()
//{
//	char s1[100];
//	
//	scanf("%s",s1);
//	
//	int cnt = 3;
//	
//	int lens;
//	
//	bool flag = false;
//	while(cnt)
//	{
//		
//		cnt--;
//		
//		for(int i = 0;s1[i] != '\0';i++)
//		{
//			if((s1[i] >= 65 && s1[i] <= 90) || (s1[i] >= 97 && s1[i] <= 122))
//			{
//				flag = true; 
//			}
//			else
//			{
//				if(cnt == 0)
//				{
//					cout << "你没有机会了" << endl;
//					return 0;
//				}
//				cout << "你输入的数据不符合要求，请重新输入" << endl;
//				cout << "你还有" << cnt << "次机会" << endl; 
//				scanf("%s",s1);
//				break;
//			}
//		}
//		
//		
//	}
//	lens = countstring(s1);
//	cout << "lens: " << lens << endl;
//	
//	return 0;
//}


//----------------------------------------------------------------------------------------------------------
//第三题 
//int dormitory_person_num = 0;
//
//struct student
//{
//	string m_name;
//	int m_age;
//	string m_major;
//	int m_number;
//};
//
//student dormitory[4];
//
//void showmenu()
//{
//	cout << "****************************" << endl;
//	cout << "*******1.添加宿舍成员*******" << endl;
//	cout << "*******2.删除宿舍成员*******" << endl;
//	cout << "*******3.查询宿舍成员*******" << endl;
//	cout << "*******4.清空宿舍成员*******" << endl;
//	cout << "*******5.显示宿舍成员*******" << endl;
//	cout << "***********0.退出***********" << endl;
//	cout << "****************************" << endl;
//
//}
//
//
//void My_ADD()
//{
//	if(dormitory_person_num == 3)
//	{
//		cout << "该宿舍人数已经达到限制" <<endl; 	
//	}
//	student s;
//		
//	cout << "请输入姓名：" << endl;
//	cin >> s.m_name;
//	
//	cout << "请输入年龄：" << endl;
//	cin >> s.m_age;
//	
//	cout << "请输入专业：" << endl;
//	cin >> s.m_major;
//	
//	cout << "请输入床位号：" << endl;
//	cin >> s.m_number;
//	
//	
//	dormitory[dormitory_person_num] = s;
//	
//	dormitory_person_num++;
//
//	
//	cout << "已添加成功" << endl;
//	 
//	system("pause");
//}
//
//
//void showAll()
//{
//	if(dormitory_person_num == 0)
//	{
//		cout << "该宿舍为空" << endl;  
//	}
//	for(int i = 0;i<dormitory_person_num;i++)
//	{
//		cout << "名字：" << dormitory[i].m_name << "\t"
//		     << "年龄：" << dormitory[i].m_age << "\t"
//			 << "专业：" << dormitory[i].m_major << "\t"
//			 << "床号：" << dormitory[i].m_number << "\t";
//		cout << endl;
//	}	
//	system("pause");
//}
//
//void My_search()
//{
//	cout << "输入你想要查询的人的姓名：" << endl;
//	string s1; 
//	cin >>  s1;
//	bool flag = false;
//	int cnt;
//	for(int i = 0;i<dormitory_person_num;i++)
//	{
//		if(dormitory[i].m_name == s1)
//		{
//			flag = true;
//			cnt = i;
//		}
//	}
//	if(flag)
//	{
//		cout << "名字：" << dormitory[cnt].m_name << "\t"
//			<< "年龄：" << dormitory[cnt].m_age << "\t"
//			<< "专业：" << dormitory[cnt].m_major << "\t"
//			<< "床号：" << dormitory[cnt].m_number << "\t" << endl;
//	}
//	else
//	{
//		cout << "查无此人" << endl; 
//	}
//	system("pause");
//}
//
//void My_Delete()
//{
//	cout << "输入你想要删除的人的姓名：" << endl;
//	string s1; 
//	cin >>  s1;
//		bool flag = false;
//		int cnt;
//		for(int i = 0;i<dormitory_person_num;i++)
//		{
//			if(dormitory[i].m_name == s1)
//			{
//				flag = true;
//				cnt = i;
//			}
//		}
//		if(flag)
//		{
//			for(int i = cnt;i<dormitory_person_num && i+1 <= dormitory_person_num;i++)
//			{
//				dormitory[i] = dormitory[i+1];
//			}
//			dormitory_person_num--;
//		}
//		else
//		{
//			cout << "查无此人" << endl;
//		} 
//		system("pause");
//}
//
//void My_clean()
//{
//	dormitory_person_num = 0;
//	cout << "已经清空" << endl;
//	system("pause");
//		
//}
//
//int main()
//{
//	while(1)
//	{
//		showmenu();
//		int num;
//		cin >> num; 
//		switch(num)
//		{
//			case 0:
//				cout << "退出成功" << endl;
//				system("pause");
//				return 0;
//				break;
//			case 1:
//				My_ADD(); 
//				break;
//			case 2:
//				My_Delete();
//				break;
//			case 3:
//				My_search();
//				break;
//			case 4:
//				My_clean();
//				break;
//			case 5:
//				showAll(); 
//				break;
//			default:
//				break;
//		}
//		system("cls");
//	}
//	return 0;	
//}



//------------------------------------------------------------------------------------------------------

int main()
{
	while(1)
	{
		cout << "Akebi" << endl;
		system("cls");
	}
	return 0;
}


 
