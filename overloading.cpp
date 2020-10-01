#include<iostream>
using namespace std;
int sum(int num1 , int num2)
{
	int sum = num1 + num2;
	return sum;
}
int sum(int num1 , int num2,int num3)
{
	int sum = num1 + num2 + num3;
	return sum;
}
double sum(double num1 , double num2)
{
	double sum = num1 + num2;
	return sum;
}
int main()
{
	int total = sum (5,10,20);
	cout << "sum = "<<total<<endl;
	return 0;
}