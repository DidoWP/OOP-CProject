#pragma once
#include <iostream>
#include "Account.h"

using namespace std;

class Shop
{
private:
	vector<Account> accaunt_list;
	
public:

	void add_àccaunt(const Account& acc);
	void print_starting_menu() const;
	Account print_login_menu() const;
	void print_singin_menu();

};

