#include<iostream>
#include<iomanip>
#include<string>
using namespace std;
void ListStudent(int score[] ,string name[] ,int  ) ;
char Calgrade(int score);
int main()
{
	int score[5],num,sum = 0;
	string name[50];
	cout << "Input Number of student : ";
	cin >> num;
	for(int i =0; i<num; i++)
	{
		cout << "Input Name : ";
		cin >> name[i];
		cout << "Enter Score "<< i+1 << " : ";
		cin >> score[i];
		cout << endl;
	}
	ListStudent(score,name,num);
}

void ListStudent(int score[],string name[],int num) //แสดงผลชื่อนักเรียนและคะแนน
{
	for(int i =0; i<num; i++)
	{
		cout << "Student Name : " << name[i] << " Score " << i+1 << " = " << score[i]  << " Your grade is "<<Calgrade(score[i]) << endl;
	}
}

char Calgrade(int score) //คำนวณเกรด
{
	char grade;
	if(score >= 80)grade = 'A';
	else if (score >=70) grade = 'B';
	else if (score >= 60) grade = 'c';
	else if (score >= 50) grade = 'D';
	return grade;
}