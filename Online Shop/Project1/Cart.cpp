
#include "Cart.h"

Cart::Cart()
{
	totalPrice = 0.0;
}

void Cart::add_Product(Product* product)
{
	list_of_Products.push_back(product);
	totalPrice += product->get_price();
}

void Cart::remove_all_Products()
{
	list_of_Products.clear();
	totalPrice = 0.0;
}

Product* Cart::get_product_at_index(int index)
{
	return list_of_Products[index - 1];
}

double Cart::get_total_price()
{
	return totalPrice;
}

void Cart::print() const
{
	for (unsigned i=0; i < list_of_Products.size(); i++)
	{
		cout << i + 1 << " ";
		list_of_Products[i]->print();
	}
	
}