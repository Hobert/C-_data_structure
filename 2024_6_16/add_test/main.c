#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
extern int ADD(int,int);
int main(int argc, char *argv[]) {
	int c = ADD(10,20);
	printf("c = %d\n",c);
	return 0;
}
