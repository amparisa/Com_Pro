#include<iostream>
using namespace std;
float AreaRectangle(int Length,int Width);
float AreaCircle(int radius);
int main()
{ 
	int Length,Width,radius;
	char manu = ' ';
	while(manu != '0'){
		cout << "Select Manu For Area\n";
		cout << "1. Rectangle\n";
		cout << "2. Circle\n";
		cout << "0. Exit Programe\n";
		cout << "Enter Manu : ";
		cin  >> manu;
		if (manu == '1' ){
			cout << "Area Manu for Rectangle ";
			cout << "Enter Length : ";
			cin >> Length;
			cout << "Enetr Width : ";
			cin >> Width;
			cout << "Area of Rectangle = " << AreaRectangle(Length,Width)<<endl;
		}
		else if  (manu == '2'){
			cout << "Area Manu for Circle\n";
			cout << "Enter radis : ";
			cout << radius;
			cout << "Area of Circle = " << AreaCircle(radius);
		}
		else if (manu == '0'){
			cout << "End Program\n";
		}
		else
			cout << "Enter number 0 , 1 , 2 \n";
	}
	return(0);
}
float AreaRectangle(int R_Length,int R_Width)
{
	int R_area;
	R_area = R_Length * R_Width;
	return (R_area);
}
float AreaCircle(int C_radius)
{
	float C_area; 
	C_area = (C_radius^2) * 3.14 ;
	return(C_area);
}