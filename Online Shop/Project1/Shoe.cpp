#include "Shoe.h"

Shoe::Shoe() {

	this->model = "";
	this->size_US = 0.0;
	this->size_UK = 0;
}
Shoe::Shoe(string productName, double price, string brand, string model, double size_US, int size_UK)
	: Product(productName, price, brand)
{
	this->model = model;
	this->size_US = size_US;
	this->size_UK = size_UK;
}
Shoe::Shoe(const Shoe& other_object) : Product(other_object)
{
	this->model = other_object.model;
	this->size_US = other_object.size_US;
	this->size_UK = other_object.size_UK;
}
Shoe& Shoe::operator=(const Shoe& other_object)
{
	if (this != &other_object)
	{
		Product::operator=(other_object);
		this->model = other_object.model;
		this->size_US = other_object.size_US;
		this->size_UK = other_object.size_UK;
	}
	return *this;
}

void Shoe::set_model(string model) {
	this->model = model;
}
void Shoe::set_size_US(int) {
	this->size_US = size_US;
}
void Shoe::set_size_UK(int) {
	this->size_UK = size_UK;
}

string Shoe::get_model() const {
	return model;
}
double Shoe::get_size_US() const {
	return size_US;
}
int Shoe::get_size_UK() const {
	return size_UK;
}
void Shoe::print() const {
	Product::print();
	cout << "Model:" << model << endl;
	cout << "Size US:" << size_US << endl;
	cout << "Size UK:" << size_UK << endl << endl;
}