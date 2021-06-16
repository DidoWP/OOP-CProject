#include "Shop.h"

using namespace std;

int main()
{
	Shop controler;                           	
	Account curent_acc;

	controler.print_starting_menu();

	int command;
	cin >> command; 
	if (command == 1) {
		curent_acc = controler.print_login_menu();
	}
	else if (command == 2) {
		controler.print_singin_menu();
	}
	else {
		cerr << "Wrong command! Now bc u are not good guy trying to break my program u are free to start from the beginning :)" << endl;
	}
	
	system("cls");
	cout << "Choose what u whant to buy\n\n";

	Shoe s1("Sneakers", 99.90, "nike", "Super cool", 8.5, 43);
	Shoe s2("Heels", 228.90, "Pachoti", "classy", 5, 37);
	Headphones h1("beats", 44, "nike", "qeq", 'S');
	Headphones h2("Beats By Dre", 99, "Apple", "nz", 'L');
	Smartphone sp1("Smsung Galaxy s18", 350, "Samsung", "normal", "3500 mAch", "Galaxy s18");
	Smartphone sp2("Smsung Galaxy Note", 999, "Samsung", "normal", "4000 mAch", "Galaxy Note");
	Smartphone sp3("Apple X", 1350, "Apple", "C", "3000 mAch", "X");
	Cart all;
	all.add_Product(&s1);
	all.add_Product(&s2);
	all.add_Product(&h1);
	all.add_Product(&h2);
	all.add_Product(&sp1);
	all.add_Product(&sp2);
	all.add_Product(&sp3);

	all.print();
	
	cout << "Enter: 1,2,3,4,5,6 or 7\n";
	cin >> command;

	Product* temp = all.get_product_at_index(command);
	curent_acc.add_product_to_cart(temp);

	cout << "Do u want to buy the product in your cart?\n Enter 1 for yes";
	cin >> command;
	curent_acc.buy_all_from_cart();

}