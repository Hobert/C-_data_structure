#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	for (int a; a<7;a++)
	{
		for(int i = 0;i<a;i++)
		{	
			printf("*");
		}
		printf("\n");
	}

	return 0;
}
