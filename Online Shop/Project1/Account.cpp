#include "Account.h"
#include <string.h>
#include <iostream>
#pragma warning(disable : 4996)


Account::Account() {
	this->username = "";
	this->password = "";
}

Account::Account(string username, string password) {
	this->username = username;
	this->password = password;
}

Account::Account(const Account& other_object)
{
	this->username = other_object.username;
	this->password = other_object.password;
}

Account& Account::operator=(const Account& other_object)
{
	if (this != &other_object)
	{
		this->username = other_object.username;
		this->password = other_object.password;
	}
	return *this;
}

bool Account::operator==(const Account& other_object)
{
	if (username == other_object.username && password == other_object.password)
		return true;

	return false;
}

void Account::set_username(string username) {
	this->username = username;
}
void Account::set_password(string password) {
	this->password = password;
}

string Account::get_username() const{
	return username;
}
string Account::get_password() const {
	return password;
}

void Account::print() const
{
	std::cout << "Your username is: " << username << std::endl;
	std::cout << "Your password is: " << password << std::endl;
}

double Account::get_total_price()
{
	return products.get_total_price();
}

void Account::add_product_to_cart(Product* product)
{
	products.add_Product(product);
}

void Account::buy_all_from_cart()
{
	cout << "Congrats, you bought: \n\n";
	products.print();
}
