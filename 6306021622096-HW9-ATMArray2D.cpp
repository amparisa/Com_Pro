#include<iostream>
#include<iomanip>
using namespace std;
void openAct(int Databank[5][3])
{
	cout << "\tOpen Acccount\n";
	for (int i = 0 ; i < 2; i++)
	{
		cout << "Account "<<i<<endl;
		cout << "Enter number account : ";
		cin >> Databank[i][0];
		cout << "Enter password : ";
		cin >> Databank[i][1];
		cout<< "Enter money : ";
		cin >> Databank[i][2];
		cout<<endl;
	}
}
void Deposit(int Databank[5][3], int index_login)
{
	int money,numAct,index_deposit,acclog,password;
	cout << "DEPOSIT" << endl;
	reInput:
	cout << "Enter num account to deposit : ";
	cin >> numAct;
	bool check = false;
	for (int i = 0; i < 5; i++) 
	{
		if (numAct == Databank[i][0])
		{
			index_deposit = i;
			check = true;
			break;
		}
	}
	if (check == true)
	{
		cout << "Enter money to deposit : ";
		cin >> money;
		Databank[index_deposit][2] += money;
		cout << "Balance account "<<Databank[index_deposit][0] << " = " << Databank[index_deposit][2] << endl;
	}
	else if (check == false)
	{
		cout << "Not found! account deposit" << endl;
		goto reInput;
	}

}
void withdraw(int Databank[5][3], int index_login)
{
	int money,numAct,index_withdraw;
	cout << "WITHDRAW" << endl;
	reInput1:
	cout << "Enter num account to withdraw : ";
	cin >> numAct;
	bool check = false;
	for (int i = 0; i < 5; i++) 
	{
		if (numAct == Databank[i][0])
		{
			index_withdraw = i;
			check = true;
			break;
		}
	}
	if (check == true )
	{
	reInput:
	cout << "Money to withdraw : ";
	cin >> money;
	if (money > Databank[index_withdraw][2])
	{
		cout << "can't withdraw balance your = " << Databank[index_withdraw][2] << endl;
		goto reInput;
	}
	Databank[index_withdraw][2] -= money;
	cout << "Balance account = " << Databank[index_withdraw][2] << endl;
	}
	else if (check == false)
	{
		cout << "Not found! account trafer" << endl;
		goto reInput1;
	}
}
void tranfer(int Databank[5][3], int index_login)
{
	int numAct, money, index_tranfer,acclog,password;
	cout << "TRANFER" << endl;
	cout << "Login for tranfer\n";
	cout << "Enter number account : ";
	cin >> acclog;
	cout << "Enter password : ";
	cin >> password;
	for (int i = 0; i < 5; i++)
	{
		if (acclog == Databank[i][0] && password == Databank[i][1])
		{ 
			index_login = i;
		}
	}
	reInput:
	cout << "Enter num account to tranfer : ";
	cin >> numAct;
	bool check = false;
	for (int i = 0; i < 5; i++)
	{
		if (numAct == Databank[i][0])
		{
			index_tranfer = i;
			check = true;
			break;
		}
	}
	if (check == true)
	{
		inputMoney:
		cout << "Enter money to trafer : ";
		cin >> money;

		if (money > Databank[index_login][2])
		{
			cout << "Money !! money your = " << Databank[index_login][2] << endl;
			goto inputMoney;
		}

		Databank[index_tranfer][2] += money;
		Databank[index_login][2] -= money;
		cout << "Tranfer to Account : " << Databank[index_tranfer][0] << endl;
		cout << "Money tranfer : " << Databank[index_tranfer][0] << " = " << Databank[index_tranfer][2] << endl;
		cout << "Account : " << Databank[index_login][0] << " = " << Databank[index_login][2] << endl;
	}
	else if (check == false)
	{
		cout << "Not found! account trafer" << endl;
		goto reInput;
	}
}
void Balance(int Databank[5][3], int index_login)
{
	int acclog,password;
	cout << "Login\n";
	login:
	cout << "Enter number account : ";
	cin >> acclog;
	cout << "Enter password : ";
	cin >> password;
	bool check = false;
	for (int i = 0; i < 5; i++)
	{
		if (acclog == Databank[i][0] && password == Databank[i][1])
		{ 
			index_login = i;
			check = true;
		}
	}
	if (check == true)
	{
		cout << "\nLogin succes\n";
		cout << "Account " << Databank[index_login][0] << " have amount = " << Databank[index_login][2] << endl;
	}
	else if (check == false)
	{
		cout << "Smoeting wrong plase try again !!!\n";
		goto login;
	}
}
int main()
{
	int Databank[5][3];
	int menu;
	int index_login = 0;
	openAct(Databank);
	do{
		cout <<"\tMenu\n";
		cout <<"1.Deposit\n";
		cout <<"2.Withdrow\n";
		cout <<"3.Tranfer\n";
		cout <<"4.Balance\n";
		cout <<"0.Exit\n";
		cout <<"Enter menu : ";
		cin >> menu;
		switch(menu)
		{
			case 0:
				system("cls");
				cout <<"Exit Programe\n";
				break;
			case 1:
				system("cls");
				Deposit(Databank,index_login);
				break;
			case 2:
				system("cls");
				withdraw(Databank,index_login);
				break;
			case 3:
				system("cls");
				tranfer(Databank,index_login);
				break;
			case 4:
				system("cls");
				Balance(Databank,index_login);
				break;
			default:
				system("cls");
				cout << "Not found menu,Pls Enter [0-4]\n";
		}

	}while(menu != 0);
	
	return(0);
}