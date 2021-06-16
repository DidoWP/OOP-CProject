#pragma once
#include "Product.h"

class Shoe : public Product {
private:
	string model;
	double size_US;
	int size_UK;

public:
	Shoe();
	Shoe(string name, double price, string brand, string model, double size_US, int size_UK);
	Shoe(const Shoe& other_object);
	Shoe& operator=(const Shoe& other_object);

	void set_model(string);
	void set_size_US(int);
	void set_size_UK(int);

	string get_model() const;
	double get_size_US() const;
	int get_size_UK() const;

	virtual void print() const;
};
