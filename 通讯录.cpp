#include <iostream>
using namespace std;
#include <stdio.h>
#include <string.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
#define max 1000
// 显示菜单
void showMenu()
{
    cout << "*******************" << endl;
    cout << "****1添加联系人****" << endl;
    cout << "****2显示联系人****" << endl;
    cout << "****3删除联系人****" << endl;
    cout << "****4查找联系人****" << endl;
    cout << "****5修改联系人****" << endl;
    cout << "****6清空联系人****" << endl;
    cout << "****0退出该系统****" << endl;
    cout << "*******************" << endl;
};


//联系人结构体 
struct Person
{
    string name;
    int sex;
    int age;
    string phone;
    string address;
};


//通讯录 
struct relatation
{
    struct Person my_man[max];

    int my_Size;
};

void addPerson(struct relatation* r1)
{
	if(r1->my_Size >= 1000)
	{
		cout << "人数已超过1000人，无法继续添加" << endl; 
	}
	else
	{
		cout << "请输入姓名：" << endl; 
		string name;
		cin >> name;
		r1->my_man[r1->my_Size].name = name;
		
		cout << "请输入性别：" << endl; 
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
			cout << "输入不符合规范，请重新输入" << endl; 
		}
		
		cout << "请输入年龄：" << endl; 
		int age;
		//while语句实现输入不符合规范，反复输入的效果 
		while(1)
		{
			cin >> age;
			if (age > 0 && age <= 150)
			{	
				r1->my_man[r1->my_Size].age = age;
				break;
			}
			cout << "输入不符合规范，请重新输入" << endl; 
		}
		
		
		cout << "请输入电话：" << endl; 
		string phone;
		cin >> phone;
		r1->my_man[r1->my_Size].phone = phone;
		
		cout << "请输入住址：" << endl; 
		string address;
		cin >> address;
		r1->my_man[r1->my_Size].address = address;
		r1->my_Size++;
		cout << "添加成功" << endl;
		system("pause");
		system("cls");		
	}	
}
void showPerson(struct relatation* r1)
{
	if(r1->my_Size == 0)
	{
		cout << "无联系人，请添加" << endl; 
	}
	else
	{
		for(int i = 0;i<r1->my_Size;i++)
		{
			cout << "姓名：" << r1->my_man[i].name << "\t";
			cout << "性别：" << (r1->my_man[i].sex == 1 ? "男" : "女")  <<  "\t";
			cout << "年龄：" << r1->my_man[i].age <<  "\t";
			cout << "电话：" << r1->my_man[i].phone << "\t";
			cout << "住址：" << r1->my_man[i].address << endl; 
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
		r1->my_Size--;//这里一定要更新数组大小，不然最后一个元素会出现异常 
	}
	else
	{
		cout << "我不到啊" << endl;
	}
	system("pause");
	system("cls");
}

void findPerson(struct relatation* r1) 
{
	cout << "请输入想要查找的人的姓名：" << endl; 
	string name;
	cin >> name;
	int ret = searchPerson(r1,name);
	if(ret != -1)
	{
		cout << "姓名：" << r1->my_man[ret].name << "\t";
		cout << "性别：" << (r1->my_man[ret].sex == 1 ? "男" : "女")  <<  "\t";
		cout << "年龄：" << r1->my_man[ret].age <<  "\t";
		cout << "电话：" << r1->my_man[ret].phone << "\t";
		cout << "住址：" << r1->my_man[ret].address << endl; 
	}
	else
	{
		cout << "我不到啊" << endl;
	}
	system("pause");
	system("cls");
}

void modifyPerson(struct relatation* r1)
{
	cout << "请输入想要修改的人的姓名：" << endl; 
	string name;
	cin >> name;
	int ret = searchPerson(r1,name);
	if(ret != -1)
	{
		cout << "请输入姓名：" << endl; 
		string name;
		cin >> name;
		r1->my_man[r1->my_Size].name = name;
		
		cout << "请输入性别：" << endl; 
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
			cout << "输入不符合规范，请重新输入" << endl; 
		}
		
		cout << "请输入年龄：" << endl; 
		int age;
		//while语句实现输入不符合规范，反复输入的效果 
		while(1)
		{
			cin >> age;
			if (age > 0 && age <= 150)
			{	
				r1->my_man[r1->my_Size].age = age;
				break;
			}
			cout << "输入不符合规范，请重新输入" << endl; 
		}
		
		
		cout << "请输入电话：" << endl; 
		string phone;
		cin >> phone;
		r1->my_man[r1->my_Size].phone = phone;
		
		cout << "请输入住址：" << endl; 
		string address;
		cin >> address;
		r1->my_man[r1->my_Size].address = address; 
	} 
	else
	{
		cout << "我不到啊" << endl;
	}
	system("pause");
	system("cls");
}

void clearPerson(struct relatation* r1)
{
	r1->my_Size = 0;
	cout << "已经清空" << endl;
	system("pause");
	system("cls");
}

int main(int argc, char** argv) {
	struct relatation r1;
    r1.my_Size = 0;
	while (1)
    {
        
        showMenu(); 
		// 显示菜单
        int select;
	    struct Person t;
	    cin >> select;
	    switch (select)
	    {
	
	    case 1: // 添加联系人
	    	addPerson(&r1); 
	        break;
	    case 2: // 2、显示联系人
	    	showPerson(&r1);
	        break;
	    case 3: // 3、删除联系人
	    	deletePerson(&r1);
	        break;
	    case 4: // 4、查找联系人
	    	findPerson(&r1);
	        break;
	    case 5: // 5、修改联系人
	    	modifyPerson(&r1);
	        break;
	    case 6:
	    	clearPerson(&r1);
	        break;
	    case 0: // 退出系统
	        cout << "???";
	        system("pause");
	        return 0;
	        break;
	    default:
	        break;
    	}
	}
}
