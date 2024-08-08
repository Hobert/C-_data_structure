#include <iostream>
using namespace std;
#include <string>
#include <ctime> //使用随机数种子时需要添加
struct student
{
    string name;
    int score;
};
struct teacher
{
    string name;
    struct student s1[5];
};
void my_fuction(struct teacher t[]) // 这里的函数传参需要研究一下
{
    for (int i = 0; i < 3; i++)
    {
        string name = "ABCDE";
        t[i].name = "Teacher_";
        t[i].name += name[i];
        for (int j = 0; j < 5; j++)
        {
            t[i].s1[j].name = "Student_";
            t[i].s1[j].name += name[j];
            int random = rand() % 61 + 40; // 设置随机数40~100，但是单独的这一行代码，随机数每次运行不变，所以要添加随机数种子
            t[i].s1[j].score = random;
        }
    }
};

void my_print(struct teacher t[], int len)
{
    for (int i = 0; i < len; i++)
    {
        cout << "老师姓名： " << t[i].name << endl;
        for (int j = 0; j < 5; j++)
        {
            cout << "学生姓名： " << t[i].s1[j].name << "考试分数： " << t[i].s1[j].score << endl;
        }
    }
};

int main()
{
    srand((unsigned int)time(NULL));
    struct teacher t[3];
    int len = sizeof(t) / sizeof(t[0]);
    my_fuction(t);
    my_print(t, len);
    return 0;
}