#include <iostream>
using namespace std;
#include <string>
#include <ctime> //ʹ�����������ʱ��Ҫ���
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
void my_fuction(struct teacher t[]) // ����ĺ���������Ҫ�о�һ��
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
            int random = rand() % 61 + 40; // ���������40~100�����ǵ�������һ�д��룬�����ÿ�����в��䣬����Ҫ������������
            t[i].s1[j].score = random;
        }
    }
};

void my_print(struct teacher t[], int len)
{
    for (int i = 0; i < len; i++)
    {
        cout << "��ʦ������ " << t[i].name << endl;
        for (int j = 0; j < 5; j++)
        {
            cout << "ѧ�������� " << t[i].s1[j].name << "���Է����� " << t[i].s1[j].score << endl;
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