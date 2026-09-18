#include <iostream>
#include "bookinfo.h"
#include "invmenu.h"
using namespace std;

void invmenu()
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
				lookUpBook();
				break;
			case 2:
				addBook();
				break;
			case 3:
				editBook();
				break;
			case 4:
				deleteBook();
				break;
			case 5:
				cout << "You selected item 5." << endl;
				break;
			default:
				cout << "Invalid choice." << endl;
		}
	}while(choice != 4);

}

void lookUpBook(){
	cout << "You selected Look Up Book." << endl;
};
void addBook(){
	cout << "You selected Look Up Book." << endl;
};
void editBook(){
	cout << "You selected Edit Book." << endl;
};
void deleteBook(){
	cout << "You selected Delete Book." << endl;
};