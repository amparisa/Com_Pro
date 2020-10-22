#include<iostream>
#include<time.h>
#include<iomanip>
using namespace std;
int main()
{
	int number = 0 ,xpos,ypos,zpos;
	int arraynum[3][3][3];
	srand(time(NULL));
	for (int x = 0 ;x < 3; x++)
	{
		for (int y = 0 ;y<3; y++)
		{
			for (int z = 0 ;z<3; z++)
			{
				number = (rand()%100);
				arraynum[x][y][z] = number;
				cout <<"Position ["<<x<<"]"<<"["<<y<<"]"<< "["<<z<<"] = "<<arraynum[x][y][z] <<endl; 
			}
		}
	}
	cout << "Enter Position X:Y:Z : ";
	cin >> xpos>>ypos>>zpos;
	cout << "Position X:Y:Z = "<< arraynum[xpos][ypos][zpos]<<endl;
	
	return 0;
}