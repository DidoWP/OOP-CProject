#include "Headphone.h"
#include <iostream>
#include <cstring>

using namespace std;

Headphones::Headphones() {
	this->fit = "";
	this->size = ' ';
}
Headphones::Headphones(string productName, double price, string brand, string fit, char size)
	:Product(productName, price, brand)
{
	this->fit = fit;
	this->size = size;
}
Headphones::Headphones(const Headphones& other_object) : Product(other_object)
{
	this->fit = other_object.fit;
	this->size = other_object.size;
}

Headphones& Headphones::operator=(const Headphones& other_object)
{
	if (this != &other_object)
	{
		Product::operator=(other_object);
		this->fit = other_object.fit;
		this->size = other_object.size;
	}
	return *this;
}

void Headphones::set_fit(string fit) {

	this->fit = fit;
}
void Headphones::set_size(char size) {
	this->size = size;
}

string Headphones::get_fit() const {
	return fit;
}
char Headphones::get_size() const {
	return size;
}

void Headphones::print() const {
	Product::print();
	cout << "Headphones Fit:" << fit << endl;
	cout << "Size:" << size << endl << endl;
}