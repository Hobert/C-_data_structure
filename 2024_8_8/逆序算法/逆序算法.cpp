#include "iostream"
using namespace std;
#include <stdio.h>

// �㷨ʵ�֣���һά����a�е�n���������ŵ�ԭ������

int main()
{
    /*
    �㷨1����ͬһ�����ڽ����滻
    */
    // int n = 5;
    // int arr[n] = {1, 2, 3, 4, 5};
    // for (int i = 0; i < n / 2; i++)
    // {
    //     int temp = arr[i]; // �����temp������ν�Ĵ洢�ռ䣨����ռ䣩
    //     arr[i] = arr[n - i - 1];
    //     arr[n - i - 1] = temp;
    // }
    // for (int i = 0; i < 5; i++)
    // {
    //     cout << "arr[" << i << "]" << ":" << arr[i] << endl;
    // };

    /*
    �㷨2��
    */
    int n = 5;
    int arr[n] = {1, 2, 3, 4, 5};
    int arr1[n];
    for (int i = 0; i < n /2; i++)
    {
        arr1[i] = arr[n - i - 1];
    }
    for (int i = 0; i < 5; i++)
    {
        arr[i] = arr1[i];
        cout << "arr[" << i << "]" << ":" << arr[i] << endl;
    };

    return 0;
}
