#include<iostream>
#include<time.h>
#include<iomanip>
using namespace std;
int sizeArrayRow,sizeArrayCol;
int odd=0,even=0;
int Array1d[10][5];
int main()
{
	sizeArrayRow = sizeof(Array1d)/sizeof(Array1d[0]);
	sizeArrayCol = sizeof(Array1d)[0]/sizeof(Array1d[0][0]);
	cout << "Array Row zise = "<< sizeArrayRow<<endl;
	cout << "Array Col size = "<< sizeArrayCol<<endl;
	cout << "Random Number 0 - 100\n";
	cout << "Number in Array\n";
	srand(time(NULL));
	//set col
	//cout <<"Col" << setw(6);
	for (int c = 0 ;c<sizeArrayCol; c++)
	{
		//cout <<"["<<c<<"]"<<setw(3);
	}
	cout <<endl;
	//display
	for (int r =0;r<sizeArrayRow;r++)
	{
		cout << "Row "<<setw(3)<<r<< " : " ;
		for (int c = 0 ;c<sizeArrayCol; c++)
		{
			Array1d[r][c] = int (2*rand()%100);
			cout <<Array1d[r][c]<<setw(5);
		}
		cout <<endl;
	}
	int numcol,numrow;
	cout <<"Start of Row : ";
	cin>>numrow;
	cout <<"End of Col : ";
	cin>>numcol;
	cout <<"\n\n\n\n";
	//display
	for (int r =numrow;r< sizeArrayRow;r++)
	{
		cout << "Row "<<setw(3)<<r<< " : " ;
		for (int c = 0 ;c< numcol; c++)
		{
			cout <<Array1d[r][c]<<setw(5);
		}
		cout << endl;
	}
	
	return 0;
}