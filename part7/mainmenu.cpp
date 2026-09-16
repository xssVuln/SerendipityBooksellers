#include <iostream>
using namespace std;

#include "cashier.h"
#include "invmenu.h"
#include "reports.h"

// Constants for array sizes
const int SIZE = 20;

// Global Arrays
string bookTitle[SIZE];
string isbn[SIZE];
string author[SIZE];
string publisher[SIZE];
string dateAdded[SIZE];

int qtyOnHand[SIZE];
double wholesale[SIZE];
double retail[SIZE];

int main()
{
	int choice;
	
    do{
	cout << "Serendipity Booksellers" << endl;
	cout << "\tMain Menu\n" << endl;

	cout << "1. Cashier Module" << endl;
	cout << "2. Inventory Database Module" << endl;
	cout << "3. Report Module" << endl;
	cout << "4. Exit" << endl;

	cout << "Enter Your Choice: ";
	cin >> choice;

	if(choice < 1 || choice > 4){
		cout << "Please enter a number in the range 1 – 4." << endl;
	}

	switch(choice){
		case 1:
			cin.ignore();
			cashier();
			break;
		case 2:
			invmenu();
			break;
		case 3:
			reports();
			break;
		default:
			cout << "Invalid choice." << endl;
			break;
	}
	}while(choice != 3);
	
	return 0;
}