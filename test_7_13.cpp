#include <iostream>
using namespace std;
#include <string>

struct man
{
    string name;
    int age;
    string sex;
};

void my_input(struct man m[], int len)
{
    string name[5] = {"Akebi",
                      "Komichi",
                      "ˮ������",
                      "��������",
                      "����С·"};
    int age[5] = {23, 22, 20, 21, 19};
    for (int i = 0; i < len; i++)
    {
        m[i].name = name[i];
        m[i].age = age[i];
        m[i].sex = "��";
        if (i == 4)
        {
            m[i].sex = "Ů";
        }
    }
};

void my_sort(struct man m[], int len)
{
    for (int i = 0; i < 5; i++) // ��Ƶ���е�ð������ֻʹ�õ���j���������Խ���һ����¼
    {
        for (int j = 1; j < 5 - i; j++)
        {

            if (m[i].age > m[i + j].age)
            {
                struct man temper = m[i];
                m[i] = m[i + j];
                m[i + j] = temper;
            }
        }
    }
};

void my_print(struct man m[], int len)
{
    for (int i = 0; i < len; i++)
    {
        cout << m[i].name << m[i].age << m[i].sex << endl;
    }
};

int main()
{

    struct man m[5];
    int len = sizeof(m) / sizeof(m[0]);
    my_input(m, len);
    my_sort(m, len);
    my_print(m, len);

    return 0;
}