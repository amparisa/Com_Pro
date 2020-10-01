#include<iostream>
using namespace std;
int main()
{
	const int row = 5 ,col = 4;
	int cnt = 0 ;
	int arrayint[row][col];
	//input
	for(int r = 0 ; r <row ; r++)
	{
		for(int c = 0 ; c < col ; c++)
		{
			arrayint[r][c] = cnt;
			cnt++;
		}
	}
	//display
	for(int r = 0 ; r <row ; r++)
	{
		for(int c = 0 ; c < col ; c++)
		{
			cout <<arrayint[r][c]<<"|";//"Array["<< r<<"]["<<c<<"] = "
		}
		cout<<endl;
	}
	
	
	return (0);
}