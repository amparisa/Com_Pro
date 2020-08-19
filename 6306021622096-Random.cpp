#include<iostream>
#include<time.h>
using namespace std;
int main()
{
	srand(time(NULL));
	int num,min = 0,max = 0 ,average = 0,sum = 0;
	for(int i = 0 ; i < 10 ; i++)
	{
		num = rand() % 10 + 1 ;
		cout << num << endl ;
		if (i == 0){
			min = num;
		}
		if (num <= min ){
			min = num;
		}
		else if (num >= max){
			max = num;
		}
		sum += num;
		
	}
	average = sum/ 10;
	cout << "min number : " << min << endl;
	cout << "max numver : " << max << endl;
	cout << "average number : " << average << endl;
	return(0);
}