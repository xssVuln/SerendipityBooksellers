#include <iostream>
using namespace std;

void bookinfo(string isbn, string title, string author, string publisher, string date, int qty, double wholesale, double retail)
{
	cout << "\tSerendipity Booksellers" << endl;
	cout << "\tBook Information\n" << endl;

	cout << "ISBN: " << isbn << endl;
	cout << "Title: " << title << endl;
	cout << "Author: " << author << endl;
	cout << "Publisher: " << publisher << endl;
	cout << "Date Added: " << date << endl;
	cout << "Quantity-On-Hand: " << qty << endl;
	cout << "Wholesale Cost: $" << wholesale << endl;
	cout << "Retail Price: $" << retail << endl;
}