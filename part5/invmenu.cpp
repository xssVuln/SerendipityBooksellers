#include <iostream>
using namespace std;

int main()
{
    int choice;
    
    do{
	cout << "Serendipity Booksellers" << endl;
	cout << "\tInventory Database\n" << endl;

	cout << "1. Look Up a Book" << endl;
	cout << "2. Add a Book" << endl;
	cout << "3. Edit a Book’s Record" << endl;
	cout << "4. Delete a Book" << endl;
	cout << "5. Return to the Main Menu" << endl;

	cout << "Enter Your Choice: ";
	cin >> choice;

	if(choice < 1 || choice > 5){
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
		
		case 5:
		cout << "You selected item 5." << endl;
		default:
	}
    while(choice != 4);

	
	return 0;
}