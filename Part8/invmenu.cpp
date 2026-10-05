#include <iostream>
#include "invmenu.h"
#include "bookinfo.h"

using namespace std;

extern const int SIZE = 20;

extern string bookTitle[];
extern string isbn[];
extern string author[];
extern string publisher[];
extern string dateAdded[];

extern int qtyOnHand[];
extern double wholesale[];
extern double retail[];

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
	}while(choice != 5);

}

void lookUpBook(){
	cout << "Enter book title: ";
	string bookName;
	cin.ignore();
	getline(cin, bookName);

	bool found = false;
	for(int i = 0; i < SIZE; i++){
		if(bookTitle[i] == bookName){
			bookinfo(bookTitle[i], isbn[i], author[i], publisher[i], dateAdded[i], qtyOnHand[i], wholesale[i], retail[i]);
			found = true;
		}
	}
	if(!found){
		cout << "Book not found." << endl;
	}
};

void addBook(){
	int index = 0;

	for(int i = 0; i < SIZE; i++){
		if(bookTitle[i] == ""){
			index = i;
		}
	}

	cout << "Enter book title: ";
	string titleValue;
	cin.ignore();
	getline(cin, titleValue);
	cout << "Enter ISBN: ";
	string isbnValue;
	getline(cin, isbnValue);
	cout << "Enter author: ";
	string authorValue;
	getline(cin, authorValue);
	cout << "Enter publisher: ";
	string publisherValue;
	getline(cin, publisherValue);
	cout << "Enter date added: ";
	string dateAddedValue;
	getline(cin, dateAddedValue);
	cout << "Enter quantity on hand: ";
	int qtyOnHandValue;
	cin >> qtyOnHandValue;
	cout << "Enter wholesale cost: ";
	double wholesaleValue;
	cin >> wholesaleValue;
	cout << "Enter retail price: ";
	double retailValue;
	cin >> retailValue;

	bookTitle[index] = titleValue;
	isbn[index] = isbnValue;
	author[index] = authorValue;
	publisher[index] = publisherValue;
	dateAdded[index] = dateAddedValue;
	qtyOnHand[index] = qtyOnHandValue;
	wholesale[index] = wholesaleValue;
	retail[index] = retailValue;
	cout << "Book added successfully!" << endl;
};

void editBook(){
	cout << "Which book would you like to edit? (Enter the title): ";
	string bookName;
	cin.ignore();
	getline(cin, bookName);

	for(int i = 0; i < SIZE; i++){
		if(bookTitle[i] == bookName){
			bookinfo(bookTitle[i], isbn[i], author[i], publisher[i], dateAdded[i], qtyOnHand[i], wholesale[i], retail[i]);
			
			cout << "Enter new book title: ";
			string titleValue;
			getline(cin, titleValue);
			cout << "Enter new ISBN: ";
			string isbnValue;
			getline(cin, isbnValue);
			cout << "Enter new author: ";
			string authorValue;
			getline(cin, authorValue);
			cout << "Enter new publisher: ";
			string publisherValue;
			getline(cin, publisherValue);
			cout << "Enter new date added: ";
			string dateAddedValue;
			getline(cin, dateAddedValue);
			cout << "Enter new quantity on hand: ";
			int qtyOnHandValue;
			cin >> qtyOnHandValue;
			cout << "Enter new wholesale cost: ";
			double wholesaleValue;
			cin >> wholesaleValue;
			cout << "Enter new retail price: ";
			double retailValue;
			cin >> retailValue;

			bookTitle[i] = titleValue;
			isbn[i] = isbnValue;
			author[i] = authorValue;
			publisher[i] = publisherValue;
			dateAdded[i] = dateAddedValue;
			qtyOnHand[i] = qtyOnHandValue;
			wholesale[i] = wholesaleValue;
			retail[i] = retailValue;

		}
	}
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

			if(confirm == 'Y' || confirm == 'y'){
				bookTitle[i] = "";
				isbn[i] = "";
				author[i] = "";
				publisher[i] = "";
				dateAdded[i] = "";
				qtyOnHand[i] = 0;
				wholesale[i] = 0.0;
				retail[i] = 0.0;
				cout << "Book deleted successfully!" << endl;
			}else{
				cout << "Book deletion canceled." << endl;
			}
		}
	}
};