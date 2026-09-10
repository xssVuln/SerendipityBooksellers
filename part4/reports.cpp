#include <iostream>
using namespace std;

int main()
{
	int choice;

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

    if(choice < 1 || choice > 7){
		cout << "Please enter a number in the range 1 – 4." << endl;
	}

	switch(choice){
		case 1:
		cout << "You selected item 1." << endl;
		case 2:
		cout << "You selected item 2." << endl;
		case 3:
		cout << "You selected item 3." << endl;
		case 4:
		cout << "You selected item 4." << endl;
		case 5:
		cout << "You selected item 5." << endl;
		case 6:
		cout << "You selected item 6." << endl;
		case 7:
		cout << "You selected item 7." << endl;
		default:
	}

	return 0;
}