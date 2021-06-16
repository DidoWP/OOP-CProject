
#include "Shop.h"
#include <algorithm>

void Shop::add_àccaunt(const Account& acc)
{
	accaunt_list.push_back(acc);
}

void Shop::print_starting_menu() const
{
	cout << "/////    Welcome to my shop    /////";
	cout << endl << endl << endl;
	cout << "Choose oprtion:" << endl;
	cout << "1. I have account" << endl;
	cout << "2. I don't have account" << endl;

}

Account Shop::print_login_menu() const
{
	string username;
	string password;
	cout << "Login into your account" << endl;
	cout << "Enter username: "; cin >> username;
	cout << "Enter password: "; cin >> password;

	Account newAcc(username, password);

	for (unsigned i = 0; i < accaunt_list.size(); i++)
	{
		if (newAcc == accaunt_list[i])
		{
			cout << "You are wellcom\n\n";
			return newAcc;
		}
	}
	cout << "Error. This acc don't exist.\n\n";

}
void Shop::print_singin_menu()
{
	string username;
	string password;
	string _password;
	cout << "Create username: "; cin >> username;
	cout << "Create password: "; cin >> password;
	cout << "Confirm password: "; cin >> _password;

	if (password == _password) {
		Account newAcc(username, password);
		accaunt_list.push_back(newAcc);
		cout << endl << "Your account is created!" << endl;
		Shop::print_login_menu();
	}
	else {
		cout << "Passwords don't match" << endl;
		Shop::print_singin_menu();
	}
	
}
