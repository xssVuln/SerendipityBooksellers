#include <iostream>
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
	cout << "You selected Look Up a Book." << endl;
};

void addBook(){
	int index = 0;

	for(int i = 0; i < SIZE; i++){
		if(bookTitle[i] == ""){
			index = i;
		}
	}

	cout << "Enter book title: ";
	string title;
	cin.ignore();
	getline(cin, title);
	cout << "Enter ISBN: ";
	string isbn;
	getline(cin, isbn);
	cout << "Enter author: ";
	string author;
	getline(cin, author);
	cout << "Enter publisher: ";
	string publisher;
	getline(cin, publisher);
	cout << "Enter date added: ";
	string dateAdded;
	getline(cin, dateAdded);
	cout << "Enter quantity on hand: ";
	int qtyOnHand;
	cin >> qtyOnHand;
	cout << "Enter wholesale cost: ";
	double wholesale;
	cin >> wholesale;
	cout << "Enter retail price: ";
	double retail;
	cin >> retail;
	
	bookTitle[index] = title;
	isbn[index] = isbn;
	author[index] = author;
	publisher[index] = publisher;
	dateAdded[index] = dateAdded;
	qtyOnHand[index] = qtyOnHand;
	wholesale[index] = wholesale;
	retail[index] = retail;
	cout << "Book added successfully!" << endl;
};

void editBook(){
	cout << "You selected Edit Book." << endl;
};

void deleteBook(){
	cout << "Which book would you like to delete? (Enter the title): ";
	string bookName;
	cin.ignore();
	getline(cin, bookName);
	
	for(int i = 0; i < SIZE; i++){
		if(bookTitle[i] == bookName){
			bookinfo(bookTitle[i], isbn[i], author[i], publisher[i], dateAdded[i], qtyOnHand[i], wholesale[i], retail[i]);
			
			cout << "Are you sure you want to delete this book? (Y/N): ";
			char confirm;
			cin >> confirm;

			if(confirm != 'Y' && confirm != 'y'){
				bookTitle[i] = "";
				isbn[i] = "";
				author[i] = "";
				publisher[i] = "";
				dateAdded[i] = "";
				qtyOnHand[i] = 0;
				wholesale[i] = 0.0;
				retail[i] = 0.0;
				cout << "Book deleted successfully!" << endl;
			}
		}
	}
};