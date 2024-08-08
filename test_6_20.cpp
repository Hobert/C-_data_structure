#include "iostream"
using namespace std;
#include <stdio.h>
int num = 10;
int main()
{
    int year = 0;
    int mouth = 0;
    int date = 0;
    scanf("%4d%2d%2d", &year, &mouth, &date);
    // cout << "year = " << year << endl;
    // cout << "mouth = " << mouth << endl;
    // cout << "date = " << date << endl;
    printf("year  = %4d\n", year);
    printf("mouth = %02d\n", mouth);
    // printf("mouth = % 2d\n", mouth);如果前面是空格，则在前面补位空格
    printf("date  = %02d\n", date);

    return 0;
}