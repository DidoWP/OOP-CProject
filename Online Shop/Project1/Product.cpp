
	// Base class for Smartphone, Headphones and Shoe 

#include "Product.h"

Product::Product() 
{
	this->productName = "";
	this->price = 0.0;
	this->brand = "";
}
Product::Product(string name, double price, string brand)
{
	this->productName = name;
	this->price = price;
	this->brand = brand;
}
Product::Product(const Product& other_object)
{
	this->productName = other_object.productName;
	this->price = other_object.price;
	this->brand = other_object.brand;
}
Product& Product::operator=(const Product& other_object)
{
	if (this != &other_object)
	{
		this->productName = other_object.productName;
		this->price = other_object.price;
		this->brand = other_object.brand;
	}
	return *this;
}

void Product::set_productName(string name) {
	this->productName = name;
}
void Product::set_price(double price) {
	this->price = price;
}
void Product::set_brand(string brand) {
	this->brand = brand;
}

string Product::get_name() const {
	return productName;
}
double Product::get_price() const {
	return price;
}
string Product::get_brand() const{
	return brand;
}

void Product::print() const {
	cout << "Product Name:" << productName << endl;
	cout << "Price:" << price << endl;
	cout << "Brand:" << brand << endl;
}
