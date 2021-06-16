
#pragma once
#include "Smartphone.h"
#include "Headphone.h"
#include "Shoe.h"
#include <vector>

using namespace std;

class Cart
{
private:
	vector<Product*> list_of_Products;
	double totalPrice;
	
public:
	Cart();
	void add_Product(Product* product);
	void remove_all_Products();
	Product* get_product_at_index(int index);
	double get_total_price();
	void print() const;
};