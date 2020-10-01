#include <iostream>
using namespace std;
//void swap(int a,int b)
void swap(int &a,int &b)
{
	cout << "in swap () Before swap 2 number \n";
	cout << "a = " << a << ", Address = " << &a << endl;
	cout << "b = " << b << ", Address = " << &b << endl;
	int t = a;
	a = b;
	b = t;
	cout << "in swap () After swap 2 number \n";
	cout << "a = " << a << ", Address = " << &a << endl;
	cout << "b = " << b << ", Address = " << &b << endl;
}
int main(void)
{
	int a = 5,b = 9;
	cout << "in main swap () Before swap 2 number \n";
	cout << "a = " << a << ", Address = " << &a << endl;
	cout << "b = " << b << ", Address = " << &b << endl;
	swap(a,b);
	cout << "in main swap () After swap 2 number \n";
	cout << "a = " << a << ", Address = " << &a << endl;
	cout << "b = " << b << ", Address = " << &b << endl;
	return(0);
}
