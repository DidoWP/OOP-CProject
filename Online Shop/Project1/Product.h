#pragma once
#include <iostream>
#include <string>

using namespace std;

class Product
{
private:
	string productName;
	double price;
	string brand;

public:
	Product();
	Product(string name, double price, string brand);
	Product(const Product& other_object);
	Product& operator=(const Product& other_object);

	void set_productName(string name);
	void set_price(double price);
	void set_brand(string brand);

	string get_name() const;
	double get_price() const;
	string get_brand() const;

	virtual void print() const;
};
