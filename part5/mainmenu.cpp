#include <iostream>
#include "cashier.h"
#include "invmenu.h"
#include "reports.h"
using namespace std;

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
	}while(choice != 4);

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
		case 4:
			cout << "You selected item 4." << endl;
		default:
	}
	
	return 0;
}