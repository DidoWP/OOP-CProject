
#include "Smartphone.h"

Smartphone::Smartphone() {
	this->chargingType = "";
	this->bateryCapacity = "";
	this->model = "";
}
Smartphone::Smartphone(string productName, double price, string brand, string chargingType, string bateryCapacity, string model)
						:Product(productName, price, brand)
{
	this->chargingType = chargingType;
	this->bateryCapacity = bateryCapacity;
	this->model = model;
}
Smartphone::Smartphone(const Smartphone& other_object) : Product (other_object)
{
	this->chargingType = other_object.chargingType;
	this->bateryCapacity = other_object.bateryCapacity;
	this->model = other_object.model;
}
Smartphone& Smartphone::operator=(const Smartphone& other_object)
{
	if (this != &other_object)
	{
		Product::operator=(other_object);
		this->chargingType = other_object.chargingType;
		this->bateryCapacity = other_object.bateryCapacity;
		this->model = other_object.model;
	}
	return *this;
}

void Smartphone::set_chargingType(string chargingType) {
	this->chargingType = chargingType;
}
void Smartphone::set_bateryCapacity(string bateryCapacity) {
	this->bateryCapacity = bateryCapacity;
}
void Smartphone::set_model(string model) {
	this->model = model;
}

string Smartphone::get_chargingType() const {
	return chargingType;
}
string Smartphone::get_bateryCapacity() const {
	return bateryCapacity;
}
string Smartphone::get_model() const {
	return model;
}

void Smartphone::print() const {
	Product::print();
	cout << "chargingType:" << chargingType << endl;
	cout << "bateryCapacity:" << bateryCapacity << endl;
	cout << "model:" << model << endl << endl;
}
