#include <iostream>
using namespace std;

int main()
{
	int choice;
	
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
	
	return 0;
}