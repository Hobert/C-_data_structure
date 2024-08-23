#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
 	int a = 0;
    printf("请输入一个大于1的自然数：");
    scanf("%d", &a);
    int flag = 0;
    for (int i = 2; i < a; i++)
    {
        if (a % i == 0)
        {
            flag = 1;
            break;
        }
    }
    if (flag == 0)
    {

        printf("输入的数是一个素数");
    }
    else
    {
        printf("输入的数不是一个素数");
    }
	return 0;
}
