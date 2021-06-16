#pragma once
#include "Cart.h"

class Account
{
private:
	string username;
	string password;
	Cart products;

public:
	Account();
	Account(string username, string password);
	Account(const Account& other_object);
	Account& operator=(const Account& other_object);
	bool operator==(const Account& other_object);

	void set_username(string username);
	void set_password(string password);
	string get_username() const;
	string get_password() const;
	void print() const;

	double get_total_price();
	void add_product_to_cart(Product* product);
	void buy_all_from_cart();
};

