#include <iostream>
using namespace std;
#include <stdio.h>
#include <string.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
#define max 1000
// ��ʾ�˵�
void showMenu()
{
    cout << "*******************" << endl;
    cout << "****1�����ϵ��****" << endl;
    cout << "****2��ʾ��ϵ��****" << endl;
    cout << "****3ɾ����ϵ��****" << endl;
    cout << "****4������ϵ��****" << endl;
    cout << "****5�޸���ϵ��****" << endl;
    cout << "****6�����ϵ��****" << endl;
    cout << "****0�˳���ϵͳ****" << endl;
    cout << "*******************" << endl;
};


//��ϵ�˽ṹ�� 
struct Person
{
    string name;
    int sex;
    int age;
    string phone;
    string address;
};


//ͨѶ¼ 
struct relatation
{
    struct Person my_man[max];

    int my_Size;
};

void addPerson(struct relatation* r1)
{
	if(r1->my_Size >= 1000)
	{
		cout << "�����ѳ���1000�ˣ��޷��������" << endl; 
	}
	else
	{
		cout << "������������" << endl; 
		string name;
		cin >> name;
		r1->my_man[r1->my_Size].name = name;
		
		cout << "�������Ա�" << endl; 
		cout << "1----man" << endl;
		cout << "2----woman" << endl;
		int sex;
		while(1)
		{
			cin >> sex;
			if (sex == 1 || sex == 2)
			{	
				r1->my_man[r1->my_Size].sex = sex;
				break;
			}
			cout << "���벻���Ϲ淶������������" << endl; 
		}
		
		cout << "���������䣺" << endl; 
		int age;
		//while���ʵ�����벻���Ϲ淶�����������Ч�� 
		while(1)
		{
			cin >> age;
			if (age > 0 && age <= 150)
			{	
				r1->my_man[r1->my_Size].age = age;
				break;
			}
			cout << "���벻���Ϲ淶������������" << endl; 
		}
		
		
		cout << "������绰��" << endl; 
		string phone;
		cin >> phone;
		r1->my_man[r1->my_Size].phone = phone;
		
		cout << "������סַ��" << endl; 
		string address;
		cin >> address;
		r1->my_man[r1->my_Size].address = address;
		r1->my_Size++;
		cout << "��ӳɹ�" << endl;
		system("pause");
		system("cls");		
	}	
}
void showPerson(struct relatation* r1)
{
	if(r1->my_Size == 0)
	{
		cout << "����ϵ�ˣ������" << endl; 
	}
	else
	{
		for(int i = 0;i<r1->my_Size;i++)
		{
			cout << "������" << r1->my_man[i].name << "\t";
			cout << "�Ա�" << (r1->my_man[i].sex == 1 ? "��" : "Ů")  <<  "\t";
			cout << "���䣺" << r1->my_man[i].age <<  "\t";
			cout << "�绰��" << r1->my_man[i].phone << "\t";
			cout << "סַ��" << r1->my_man[i].address << endl; 
		}
		system("pause");
		system("cls");
	}
}

int searchPerson(struct relatation* r1,string name)
{
	for(int i = 0;i<r1->my_Size;i++)
	{
		if(r1->my_man[i].name == name)
		{
			return i;
		}
	}
	return -1;
}

void deletePerson(struct relatation* r1)
{
	string name;
	cin >> name;
	int ret = searchPerson(r1,name);
	if(ret != -1)
	{
		for(int i = ret ; i<r1->my_Size; i++)
		{
			r1->my_man[i] = r1->my_man[i+1];
		}
		r1->my_Size--;//����һ��Ҫ���������С����Ȼ���һ��Ԫ�ػ�����쳣 
	}
	else
	{
		cout << "�Ҳ�����" << endl;
	}
	system("pause");
	system("cls");
}

void findPerson(struct relatation* r1) 
{
	cout << "��������Ҫ���ҵ��˵�������" << endl; 
	string name;
	cin >> name;
	int ret = searchPerson(r1,name);
	if(ret != -1)
	{
		cout << "������" << r1->my_man[ret].name << "\t";
		cout << "�Ա�" << (r1->my_man[ret].sex == 1 ? "��" : "Ů")  <<  "\t";
		cout << "���䣺" << r1->my_man[ret].age <<  "\t";
		cout << "�绰��" << r1->my_man[ret].phone << "\t";
		cout << "סַ��" << r1->my_man[ret].address << endl; 
	}
	else
	{
		cout << "�Ҳ�����" << endl;
	}
	system("pause");
	system("cls");
}

void modifyPerson(struct relatation* r1)
{
	cout << "��������Ҫ�޸ĵ��˵�������" << endl; 
	string name;
	cin >> name;
	int ret = searchPerson(r1,name);
	if(ret != -1)
	{
		cout << "������������" << endl; 
		string name;
		cin >> name;
		r1->my_man[r1->my_Size].name = name;
		
		cout << "�������Ա�" << endl; 
		cout << "1----man" << endl;
		cout << "2----woman" << endl;
		int sex;
		while(1)
		{
			cin >> sex;
			if (sex == 1 || sex == 2)
			{	
				r1->my_man[r1->my_Size].sex = sex;
				break;
			}
			cout << "���벻���Ϲ淶������������" << endl; 
		}
		
		cout << "���������䣺" << endl; 
		int age;
		//while���ʵ�����벻���Ϲ淶�����������Ч�� 
		while(1)
		{
			cin >> age;
			if (age > 0 && age <= 150)
			{	
				r1->my_man[r1->my_Size].age = age;
				break;
			}
			cout << "���벻���Ϲ淶������������" << endl; 
		}
		
		
		cout << "������绰��" << endl; 
		string phone;
		cin >> phone;
		r1->my_man[r1->my_Size].phone = phone;
		
		cout << "������סַ��" << endl; 
		string address;
		cin >> address;
		r1->my_man[r1->my_Size].address = address; 
	} 
	else
	{
		cout << "�Ҳ�����" << endl;
	}
	system("pause");
	system("cls");
}

void clearPerson(struct relatation* r1)
{
	r1->my_Size = 0;
	cout << "�Ѿ����" << endl;
	system("pause");
	system("cls");
}

int main(int argc, char** argv) {
	struct relatation r1;
    r1.my_Size = 0;
	while (1)
    {
        
        showMenu(); 
		// ��ʾ�˵�
        int select;
	    struct Person t;
	    cin >> select;
	    switch (select)
	    {
	
	    case 1: // �����ϵ��
	    	addPerson(&r1); 
	        break;
	    case 2: // 2����ʾ��ϵ��
	    	showPerson(&r1);
	        break;
	    case 3: // 3��ɾ����ϵ��
	    	deletePerson(&r1);
	        break;
	    case 4: // 4��������ϵ��
	    	findPerson(&r1);
	        break;
	    case 5: // 5���޸���ϵ��
	    	modifyPerson(&r1);
	        break;
	    case 6:
	    	clearPerson(&r1);
	        break;
	    case 0: // �˳�ϵͳ
	        cout << "???";
	        system("pause");
	        return 0;
	        break;
	    default:
	        break;
    	}
	}
}
