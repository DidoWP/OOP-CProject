#pragma once
#include "Product.h"

class Headphones : public Product {
private:
	string fit;
	char size;

public:
	Headphones();
	Headphones(string name, double price, string brand, string fit, const char size);
	Headphones(const Headphones& other_object);
	Headphones& operator=(const Headphones& other_object);

	void set_fit(string);
	void set_size(char);
	string get_fit() const;
	char get_size() const;

	virtual void print() const;
};


