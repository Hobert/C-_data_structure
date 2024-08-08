#include "iostream"
using namespace std;
#include <stdio.h>

// 算法实现：将一维数组a中的n个数逆序存放到原数组中

int main()
{
    /*
    算法1，在同一数组内进行替换
    */
    // int n = 5;
    // int arr[n] = {1, 2, 3, 4, 5};
    // for (int i = 0; i < n / 2; i++)
    // {
    //     int temp = arr[i]; // 这里的temp就是所谓的存储空间（计算空间），该算法的渐进空间复杂度：S(n) = O(1)，常数阶(原地工作)
    //     arr[i] = arr[n - i - 1];
    //     arr[n - i - 1] = temp;
    // }
    // for (int i = 0; i < 5; i++)
    // {
    //     cout << "arr[" << i << "]" << ":" << arr[i] << endl;
    // };

    /*
    算法2：
    */
    int n = 5;
    int arr[n] = {1, 2, 3, 4, 5};
    int arr1[n];
    for (int i = 0; i < n; i++)
    {
        arr1[i] = arr[n - i - 1]; // arr1就是一个用于暂时存储的数组，S(n) = O(n)
    }
    for (int i = 0; i < 5; i++)
    {
        arr[i] = arr1[i];
        cout << "arr[" << i << "]" << ":" << arr[i] << endl;
    };

    return 0;
}