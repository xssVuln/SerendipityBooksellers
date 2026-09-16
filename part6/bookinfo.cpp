#include <iostream>
using namespace std;

void bookinfo()
{
	cout << "\tSerendipity Booksellers" << endl;
	cout << "\tBook Information\n" << endl;

	cout << "ISBN:" << endl;
	cout << "Title:" << endl;
	cout << "Author:" << endl;
	cout << "Publisher:" << endl;
	cout << "Date Added:" << endl;
	cout << "Quantity-On-Hand:" << endl;
	cout << "Wholesale Cost:" << endl;
	cout << "Retail Price:" << endl;

	cout << "Enter Your Choice: ";
	string choice;
	getline(cin, choice);
}