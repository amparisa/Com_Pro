#include<iostream>
using namespace std;
int main()
{
	double Money,Deposite,Withdraw,Total;
	char manu = ' ';
	while(manu != '0'){
		cout << "Net Banking / ATM \n";
		cout << "1. Register\n";
		cout << "2. Deposite\n";
		cout << "3. Withdraw\n";
		cout << "0. Exit \n";
		cout << "Enter Manu : ";
		cin  >> manu;
		if (manu == '1' ){
			cout << "Register\n";
			cout<<"Enter money : ";
			cin>> Money;
			cout<<"You have money : "<< Money <<endl;
		}
		else if  (manu == '2'){
			cout << "Deposite\n";
			cout << "Enetr Deposite : ";
			cin >> Deposite;
			Total = Money + Deposite;
			cout << "You have money : " << Total << endl;
		}
		else if  (manu == '3'){
			cout << "Withdraw\n";
			cout << "Enter Withdraw : ";
			cin >> Withdraw;
			if (Withdraw < Total)
				Total = Total-Withdraw;
				cout<<"You have money "<< Total <<endl;
		}
		else if (manu == '0'){
			cout << "Exit\n";
		}
		else
			cout << "Enter number 0 , 1 , 2 ,3 \n";
	}
	return(0);
}