#include <iostream>
#include <stdio.h>
using namespace std;

////��һ�� 
//string bublesort(string str,int lens)//��ʽ���Σ�����ͬ����string���н��ս�� 
//{
//	for(int i = 0;i < lens;i++)//�ײ�ѭ��ȷ���Ƚϲ���1 
//	{
//		for(int j = i+1;j<lens;j++)//�ڲ�ѭ��ȷ���Ƚϲ���2 
//		{
//			if(str[i]<str[j])
//			{
//				//������ֵ 
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
//	string s1 = "dBadaAcvz";//�����ַ���
//	int len = sizeof(s1); 
//	string s2 = bublesort(s1,len);//����������ʽ���Σ�����s2�������ڽ�������Ľ�� 
//	char arr[len];//��������� 
//	for(int i = 0;i<len; i++)
//	{
//		arr[i] = s2[i];//�����ݴ��������� 
//	}
//	for(int i = 0;i<len; i++)
//	{
//		cout << arr[i] << endl;//��ӡ���� 
//	}
//	return 0;
//}



//----------------------------------------------------------------------------------------------------------
//�ڶ��� 
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
//					cout << "��û�л�����" << endl;
//					return 0;
//				}
//				cout << "����������ݲ�����Ҫ������������" << endl;
//				cout << "�㻹��" << cnt << "�λ���" << endl; 
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
//������ 
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
//	cout << "*******1.��������Ա*******" << endl;
//	cout << "*******2.ɾ�������Ա*******" << endl;
//	cout << "*******3.��ѯ�����Ա*******" << endl;
//	cout << "*******4.��������Ա*******" << endl;
//	cout << "*******5.��ʾ�����Ա*******" << endl;
//	cout << "***********0.�˳�***********" << endl;
//	cout << "****************************" << endl;
//
//}
//
//
//void My_ADD()
//{
//	if(dormitory_person_num == 3)
//	{
//		cout << "�����������Ѿ��ﵽ����" <<endl; 	
//	}
//	student s;
//		
//	cout << "������������" << endl;
//	cin >> s.m_name;
//	
//	cout << "���������䣺" << endl;
//	cin >> s.m_age;
//	
//	cout << "������רҵ��" << endl;
//	cin >> s.m_major;
//	
//	cout << "�����봲λ�ţ�" << endl;
//	cin >> s.m_number;
//	
//	
//	dormitory[dormitory_person_num] = s;
//	
//	dormitory_person_num++;
//
//	
//	cout << "����ӳɹ�" << endl;
//	 
//	system("pause");
//}
//
//
//void showAll()
//{
//	if(dormitory_person_num == 0)
//	{
//		cout << "������Ϊ��" << endl;  
//	}
//	for(int i = 0;i<dormitory_person_num;i++)
//	{
//		cout << "���֣�" << dormitory[i].m_name << "\t"
//		     << "���䣺" << dormitory[i].m_age << "\t"
//			 << "רҵ��" << dormitory[i].m_major << "\t"
//			 << "���ţ�" << dormitory[i].m_number << "\t";
//		cout << endl;
//	}	
//	system("pause");
//}
//
//void My_search()
//{
//	cout << "��������Ҫ��ѯ���˵�������" << endl;
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
//		cout << "���֣�" << dormitory[cnt].m_name << "\t"
//			<< "���䣺" << dormitory[cnt].m_age << "\t"
//			<< "רҵ��" << dormitory[cnt].m_major << "\t"
//			<< "���ţ�" << dormitory[cnt].m_number << "\t" << endl;
//	}
//	else
//	{
//		cout << "���޴���" << endl; 
//	}
//	system("pause");
//}
//
//void My_Delete()
//{
//	cout << "��������Ҫɾ�����˵�������" << endl;
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
//			cout << "���޴���" << endl;
//		} 
//		system("pause");
//}
//
//void My_clean()
//{
//	dormitory_person_num = 0;
//	cout << "�Ѿ����" << endl;
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
//				cout << "�˳��ɹ�" << endl;
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


 
