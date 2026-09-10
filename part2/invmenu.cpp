#include <iostream>
using namespace std;

int main()
{
	cout << "Serendipity Booksellers" << endl;
	cout << "\tInventory Database\n" << endl;

	cout << "1. Look Up a Book" << endl;
	cout << "2. Add a Book" << endl;
	cout << "3. Edit a Book’s Record" << endl;
	cout << "4. Delete a Book" << endl;
	cout << "5. Return to the Main Menu" << endl;

	cout << "Enter Your Choice: ";
	string choice;
	getline(cin, choice);

	
	return 0;
}