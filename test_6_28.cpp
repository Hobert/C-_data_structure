#include "iostream"
using namespace std;
#include <stdio.h>
#include <string.h>

int sum = 0;

// int main()
// {
//     // for (int i = 0; i < 100; i++)
//     // {
//     //     sum = sum;
//     //     for (int j = 1; j < i + 2; j++)
//     //     {
//     //         sum = sum + j;
//     //     }
//     // }
//     // printf("%d", sum);

//     int temp = 0;
//     for (int i = 1; i < 101; i++)
//     {
//         temp += i;
//         sum += temp;
//     }
//     printf("%d", sum);
//     return 0;
// }

// int main()
// {
//     int temp = 0;
//     for (int i = 1; i < 101; i++)
//     {
//         // temp += i;
//         sum += i * (i + 1) / 2;//直接数学公式大法
//     }
//     printf("%d", sum);
//     return 0;
// }

// int main()
// {
//     char *p = "abcde";
//     char *q = (char *)malloc(strlen(p) + 1);
//     int i = 0;
//     for (i = 0; i < strlen(p); i++)
//         q[i] = p[i];

//     q[i] = 0;
//     printf("%s", q[5]);
//     printf("%c", q[4]);

//     return 0;
// }

// int main()
// {
//     for (int i = 1; i <= 5; i++, i *= 2)
//     {
//         sum += i;
//     }
//     printf("%d", sum);
//     return 0;
// }