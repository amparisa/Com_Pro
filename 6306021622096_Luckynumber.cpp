#include<iostream>
#include<time.h>
#include<string>
using namespace std;
int main()
{
	srand(time(NULL));
	int mynum,rannum;
	int x = 1;
	char P;
	int score = 100;
	do{
		rannum = int (rand()%5);
	do{
		cout << "Enter MyNum " << x << " : ";
		cin >> mynum;
		if (rannum == mynum)
		{
			score = score + 20 ; // บวก10ตอนตอบถูก
			cout << "Rannum = "<< rannum <<endl;
			cout << "...Congratulation...\n";
			cout << "You have score : " << score << endl; 
		}
		else 
		{
			if(mynum < rannum)
			{
				score = score - 5; // ลบ5ตอนตอบผิด
				cout << "MyNUM incorrect !!!!!!\n";
				cout << "MyNum is less... : score -5 :" << score << endl;
			}
			else if(mynum > rannum)
			{
				score = score - 5;// ลบ5ตอนตอบผิด
				cout << "MyNUM incorrect \n";
				cout << "MyNum is more... : score -5 :" << score << endl;
			}
			if (score <= 0)
			{
				cout << endl << "!!!...GAME OVER...!!!\n"; //ถ้าคะแนนเท่ากับ0คือจบเกมส์
				rannum = mynum; //เพื่อให้dowhileหยุดทำงาน
			}
		}
		x = x++; //เก็บจำนวนรอบ+1ไปเรื่อยๆ
	}while(rannum != mynum);
		cout << "Do you want to play again ????? [Y/N] : "; //ถามว่าจะเล่นต่อไหม
		cin >> P;
	do{
		if (P == 'Y') //ถ้าเล่นต่อ
		{
			cout << endl << "...LET'S TO PLAY GAME AGAIN...\n";
		}
		else if (P == 'N') //ถ้าไม่เล่นต่อ
		{
			cout << endl << "...END PROGRAM...\n";
		}
		else //ถ้าไม่ใช่ Y กับ N
		{
			cout << endl <<  "...PLEASE ENTER [Y/N]...\n";
		}
		x = 1;
		score = 100;	
	}while(P != 'N' && P != 'Y');
	}while(P != 'N');

	return(0);
}