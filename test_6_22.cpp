#include "iostream"
using namespace std;
#include <stdio.h>
int num = 10;
int main()
{
    int study_number = 0;
    float score1 = 0;
    float score2 = 0;
    float score3 = 0;
    scanf("%d;%4f,%4f,%4f", &study_number, &score1, &score2, &score3);
    printf("The each subject score of No.%d is %4f,%4f,%4f.", study_number, score1, score2, score3);

    return 0;
}