#include <iostream>
#include<conio.h>

using namespace std;

int main() {
	char key;
	char exit = 'f';

	while (exit != '/' ) {
		cout << "Input a character :";
		cin >> key;
		switch (key)
		{
		case 'w':
			cout << "Welcome" << endl;
			break;

		case 'h':
			cout << "Happy" << endl;
			break;

		case 's':
			cout << "Sad" << endl;
			break;

		case '/':
			cout << "exited the while loop" << endl;
			break;

		default:
			cout << "Not Defined" << endl;
			break;
		}
		exit = key;
	}
	cout << endl << "Enter any key to exit" ;
    _getch();

	return 0;
}