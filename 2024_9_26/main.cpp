#include <iostream>
using namespace std;
#include <vector>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */


void test01()
{
	vector<int> v;
	
	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	v.push_back(40);
	
	vector<int>::iterator itbegin = v.begin();
	vector<int>::iterator itend = v.end();
	
	while(itbegin != itend)
	{
		cout << *itbegin << endl;
		itbegin++;
	}
	
//	for(vector::iterator itbegin = v.begin();itbegin != v.end();itbegin++)
//	{
//	
//	}
	
}


int main(int argc, char** argv) {
	test01();
	return 0;
}
