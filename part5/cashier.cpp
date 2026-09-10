#include <iostream>
using namespace std;

int main()
{
	int choice;

	cout << "Serendipity Booksellers\n";
	cout << "\tCashier Module\n";

	cout << "Date: ";
	string date;
	getline(cin, date);

	cout << "Quantity of books: ";
	double quantity;
	cin >> quantity;

	cin.ignore();

	cout << "ISBN: ";
	string isbn;
	getline(cin, isbn);

	cout << "Title: ";
	string title;
	getline(cin, title);

	cout << "Price: ";
	double price;
	cin >> price;

	cout << "Serendipity Booksellers" << endl;
	cout << "Date:" << date << "\n" << endl;
    cout << "Qty\tISBN\tTitle\tPrice\tTotal" << endl;
	cout << "___________________________________________________________" << endl;

	double total = quantity * price;

	cout << quantity << "\t" << isbn << "\t" << title << "\t" << price << "\t" << total << endl;
	cout << endl;
	cout << endl;
	cout << "\tSubtotal\t\t$" << total << endl;

	double tax = total * 0.06;

	cout << "\tTax\t\t\t$" << tax << endl;
	cout << "\tTotal\t\t\t$" << total + tax << endl;
	cout << endl;
	cout << "Thank You for Shopping at Serendipity!" << endl;
	return 0;
}