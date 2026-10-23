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
		if(bookTitle[i] == bookName && !found){
			bookInfo(isbn[i], bookTitle[i], author[i], publisher[i], dateAdded[i], qtyOnHand[i], wholesale[i], retail[i]);
			found = true;
		}
	}
	if(!found){
		cout << "Book not found." << endl;
	}
};

void addBook(){
	int index = 0;
	int empty = 0;

	bool found = false;
	for(int i = 0; i < SIZE; i++){
		if(bookTitle[i] == "" && !found){
			empty++;
			index = i;
			found = true;
		}
	}

	if(empty < 1){
		cout << "No more books can be added" << endl;
	}else{
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
		cout << "Enter date added (MM-DD-YYYY): ";
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
	}
};

void editBook(){
	cout << "Which book would you like to edit? (Enter the title): ";
	string bookName;
	cin.ignore();
	getline(cin, bookName);

	int index = -1;
	for(int i = 0; i < SIZE; i++){
		if(bookTitle[i] == bookName){
			index = i;
			break;
		}
	}

	if(index == -1){
		cout << "Book is not in the inventory" << endl;
		return;
	}

	bookInfo(isbn[index], bookTitle[index], author[index], publisher[index], dateAdded[index], qtyOnHand[index], wholesale[index], retail[index]);

	int fieldChoice = 0;
	do{
		cout << "\nWhich field would you like to change?" << endl;
		cout << "1. Title" << endl;
		cout << "2. ISBN" << endl;
		cout << "3. Author" << endl;
		cout << "4. Publisher" << endl;
		cout << "5. Date Added (MM-DD-YYYY)" << endl;
		cout << "6. Quantity on Hand" << endl;
		cout << "7. Wholesale Cost" << endl;
		cout << "8. Retail Price" << endl;
		cout << "9. Exit" << endl;
		cout << "Enter your choice: ";
		cin >> fieldChoice;

		switch(fieldChoice){
			case 1:
				cout << "Enter new book title: ";
				cin.ignore();
				getline(cin, bookTitle[index]);
				break;
			case 2:
				cout << "Enter new ISBN: ";
				cin.ignore();
				getline(cin, isbn[index]);
				break;
			case 3:
				cout << "Enter new author: ";
				cin.ignore();
				getline(cin, author[index]);
				break;
			case 4:
				cout << "Enter new publisher: ";
				cin.ignore();
				getline(cin, publisher[index]);
				break;
			case 5:
				cout << "Enter new date added: ";
				cin.ignore();
				getline(cin, dateAdded[index]);
				break;
			case 6:
				cout << "Enter new quantity on hand: ";
				cin >> qtyOnHand[index];
				break;
			case 7:
				cout << "Enter new wholesale cost: ";
				cin >> wholesale[index];
				break;
			case 8:
				cout << "Enter new retail price: ";
				cin >> retail[index];
				break;
			case 9:
				cout << "Returning to the inventory menu." << endl;
				break;
			default:
				cout << "Invalid choice. Please enter a number from 1 to 9." << endl;
				break;
		}
	}while(fieldChoice != 9);
};

void deleteBook(){
	cout << "Which book would you like to delete? (Enter the title): ";
	string bookName;
	cin.ignore();
	getline(cin, bookName);

	bool found = false;
	
	for(int i = 0; i < SIZE; i++){
		if(bookTitle[i] == bookName){
			found = true;
			bookInfo(isbn[i], bookTitle[i], author[i], publisher[i], dateAdded[i], qtyOnHand[i], wholesale[i], retail[i]);
			
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

	if(!found){
		cout << "Book is not in inventory" << endl;
	}
};