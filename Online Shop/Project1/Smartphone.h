#pragma once
#include "Product.h"

class Smartphone : public Product {
private:
	string chargingType;
	string bateryCapacity;
	string model;

public:
	Smartphone();
	Smartphone(string name, double price, string brand, string chargingType, string bateryCapacity, string model);
	Smartphone(const Smartphone& other_object);
	Smartphone& operator= (const Smartphone& other_object);

	void set_chargingType(string);
	void set_bateryCapacity(string);
	void set_model(string);

	string get_chargingType() const;
	string get_bateryCapacity() const;
	string get_model() const;

	virtual void print() const;
};
