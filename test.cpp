#include "iostream"
using namespace std;
#include <stdio.h>
int num = 10;
int main()
{
    int arr[] = {73, 32, 99, 97, 110, 32, 100, 111, 32, 105, 116, 33};
    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
    {
        printf("%c", arr[i]);
    }
    return 0;
}