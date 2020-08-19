#include<iostream>
using namespace std;
int balance1,balance2,acc,acc1,acc2;
float regis();
float depo();
float withd();
float show();
float account();
int main()
{
	int manu;
	do{
		cout << "=== Net Banking ===\n";
	    cout << "1.Register\n";
	    cout << "2.Deposite\n";
		cout << "3.Withdraw\n";
		cout << "4.Show Blance\n";
	    cout << "0.Exit\n";
		cout << "Choose Option [0-4} : ";
	    cin >> manu;

	switch(manu){
	case 1 :
		cout<<"Register"<<endl;
		regis();
		break;
	case 2 :
		cout<<"Deposite"<<endl;
		depo();
		break;
	case 3 :
		cout<<"Withdraw"<<endl;
		withd();
		break;
	case 4 :
		cout<<"Show Blance"<<endl;
		show();
		break;
	case 0 :
		cout<<"Exit Program"<<endl;
		break;
	default :
		cout<<"Please input 0, 1, 2, 0"<<endl;
		break;}
	}
	while(manu != 0);
	return(0);
}

float regis()
{
	int acc1,acc2;
	cout << "Register\n";
	cout << "Enter Account 1 ID : ";
	cin >> acc1;
	cout << "Enter moeny for account 1 : ";
	cin >> balance1;
	cout << "Acccount ID 1 have money : " << balance1 << endl;
	//***********************************************************
	cout << "Enter Account 2 ID : ";
	cin >> acc2;
	cout << "Enter moeny for account 2 : ";
	cin >> balance2;
	cout << "Acccount ID 2 have money : " << balance2 << endl;
	//***********************************************************
	return(balance1,balance2);
}
float depo()
{
	float add1,add2;
	cout << "Enter Account ID : ";
	cin >> acc;
	if (acc == acc1){
		cout << "Enter Your Deposite Money Account 1  : ";
		cin >> add1;
		cout << "Your Total Balance Account  is : " << balance1 + add1 <<endl;
		balance1 = balance1 + add1;
	}
	//***********************************************************
	else if (acc == acc2){
		cout << "Enter Your Deposite Money Account 2  : ";
		cin >> add2;
		cout << "Your Total Balance Account  is : " << balance2 + add2 << endl;
		balance2 = balance2 + add2;
	}
	//***********************************************************
	else
		cout<<"Not Account try again.\n";
	return(0);
}
float withd()
{
	float dec1,dec2;
	cout<<"Enter Your Account : ";
	cin>>acc;
	if(acc == acc1){
		cout << "Enter Your Withdraw Money Account 1 : ";
		cin >> dec1;
		if(balance1 >= dec1 ){
			cout << "Your Total Balance is : " << balance1 - dec1 << endl;
			balance1 = balance1 - dec1;
		}
		else{
			cout << "Your balance not enough to withdraw\n";
		}
	}
	//***********************************************************
	else if(acc == acc2){
		cout << "Enter Your Withdraw Money Account 2 : ";
		cin >> dec2;
		if(balance2 >= dec2 ){
			cout << "Your Total Balance is : " << balance2 - dec2 << endl;
			balance2 = balance2 - dec2;
	}
	//***********************************************************
	else{
		cout << "Your balance not enough to withdraw\n";
	}
	}
	else
		cout << "Not Account try again.\n";
	return(0);
}
float show()
{
	cout << "Show  balance all account\n";
	cout << "Account 1 have money : " << balance1 << endl ;
	cout << "Account 2 have money : " << balance2 << endl ;
	return(0);
}