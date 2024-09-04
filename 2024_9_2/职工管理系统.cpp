#include <iostream>
#include "WorkSpace.h"
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	WorkSpace ws;
	int choice = 0;
	while(true)
	{
		ws.show_menu();
		cout << "ÇëÊäÈëÄãµÄÑ¡Ôñ" << endl;
		cin >> choice;
		switch(choice)
		{
			case 0:
				ws.ExitSystem();
				break;
			case 1:
				break;
			case 2:
				break;
			case 3:
				break;
			case 4:
				break;
			case 5:
				break;
			case 6:
				break;
			case 7:
				break;
			default :
				system("cls");
				break;
		
				 
		}
		
	}
	
	system("pause");
	return 0;
}
