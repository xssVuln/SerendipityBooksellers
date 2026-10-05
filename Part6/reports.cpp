#include <iostream>
#include "reports.h"
using namespace std;

void reports()
{
	int choice;

    do{
		cout << "Serendipity Booksellers" << endl;
		cout << "\tReports\n" << endl;

		cout << "1. Inventory Listing" << endl;
		cout << "2. Inventory Wholesale Value" << endl;
		cout << "3. Inventory Retail Value" << endl;
		cout << "4. Listing by Quantity" << endl;
		cout << "5. Listing by Cost" << endl;
		cout << "6. Listing by Age" << endl;
		cout << "7. Return to Main Menu" << endl;

		cout << "Enter Your Choice: ";
		cin >> choice;

		switch(choice){
			case 1:
				repListing();
				break;
			case 2:
				repWholesale();
				break;
			case 3:
				repRetail();
				break;
			case 4:
				repQty();
				break;
			case 5:
				repCost();
				break;
			case 6:
				repAge();
				break;
			case 7:
				break;
			default:
				cout << "Invalid choice." << endl;
		}
	}while(choice != 7);

}

void repListing(){
	cout << "You selected Inventory Listing." << endl;
}
void repWholesale(){
	cout << "You selected Inventory Wholesale Value." << endl;
}
void repRetail(){
	cout << "You selected Inventory Retail Value." << endl;
}
void repQty(){
	cout << "You selected Listing by Quantity." << endl;
}
void repCost(){
	cout << "You selected Listing by Cost." << endl;
}
void repAge(){
	cout << "You selected Listing by Age." << endl;
}