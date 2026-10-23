#include "cashier.h"
#include <iostream>
using namespace std;

extern string bookTitle[];
extern string isbn[];
extern double retail[];

void cashier()
{
	cout << "Serendipity Booksellers\n";
	cout << "\tCashier Module\n";

	cout << "Date (MM/DD/YY): ";
	string date;
	getline(cin, date);

	int SIZE = 20;
	bool found = false;
	int reenter = 1;
	double quantity = 0;
	int addAnother = 0;

	while((!found && reenter == 1) || addAnother == 1){
		cout << "ISBN (#-###-#####-#): ";
		string isbnIn;
		getline(cin, isbnIn);
		for(int i = 0; i < SIZE; i++)
		{
			if(isbnIn == isbn[i])
			{
				found = true;
				cout << "Book Title: " << bookTitle[i] << endl;
				cout << "Price: $" << retail[i] << endl;

				cout << "Quantity of book: ";
				cin >> quantity;

				cout << "Add another book to this order?";
				cin >> addAnother;
				cin.ignore();
				break;
			}
		}

		if(!found)
		{
			cout << "ISBN number was not found." << endl;
			cout << "Re-enter ISBN number? ";
			cin >> reenter;
			cin.ignore();
		}
	}

	cout << "Serendipity Booksellers" << endl;
	cout << "Date:" << date << "\n" << endl;
    cout << "Qty\tISBN\tTitle\tPrice\tTotal" << endl;
	cout << "___________________________________________________________" << endl;

	double total = quantity * 1;

	cout << quantity << "\t" << isbn << "\t" << "t" << "\t" << "t" << "\t" << total << endl;
	cout << endl;
	cout << endl;
	cout << "\tSubtotal\t\t$" << total << endl;

	double tax = total * 0.06;

	cout << "\tTax\t\t\t$" << tax << endl;
	cout << "\tTotal\t\t\t$" << total + tax << endl;
	cout << endl;
	cout << "Thank You for Shopping at Serendipity!" << endl;
}
