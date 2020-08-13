#include<iostream>
using namespace std;
int main()
{
	int Register,Depositen,Withdraw,total;
	char manu = ' ';
	while(manu != '0'){
		cout << "Net Banking / ATM \n";
		cout << "1. Register\n";
		cout << "2. Depositen\n";
		cout << "3. Withdraw\n";
		cout << "0. Exit \n";
		cout << "Enter Manu : ";
		cin  >> manu;
		if (manu == '1' ){
			cout << "Register : ";
			cin >> Register;
		}
		else if  (manu == '2'){
			cout << "Depositen : ";
			cin >> Depositen;
			total = Register + Depositen;
			cout << "You have mone : " << total;
		}
		else if  (manu == '3'){
			cout << "Withdraw : ";
			cin >> Withdraw;
		}
		else if (manu == '0'){
			cout << "Exit\n";
		}
		else
			cout << "Enter number 0 , 1 , 2 \n";
	}
	return(0);
}