#include <iostream>

using namespace std;
int main()
{
	int a = 12;
	cout << " Default adress " << &a << endl;

	int b = 11;
	cout << " Number from adress " << *&b << endl;

	int c = 10;
	cout << " Not default number from adress " << *&*&*&*&*&c << endl;

	int d = 9;
	int* pointerD = &d;
	cout << " Pointer adress " << pointerD << endl;

	int e = 9;
	cout << " e = " << e << endl;
	int* pointerE = &e;
	*pointerE = 99;
	cout << " e = " << e << endl;
	cout << " Pointer equal " << pointerE << endl;


	return 0;
}