#include<iostream>
#include<cmath>
#include<conio.h>
using namespace std;

int main() {
	int n;

	//check if a number is prime
	cout << "1.Prime Number" << endl;
	cout << "Enter a number : " ;
	cin >> n;
	bool flag = 0;
	for (int i = 2; i < n; i++) {
		if (n % i == 0) {
			cout << "Non Prime" << endl;
			flag = 1;
			break;
		}
	}
	if (flag == 0)
		cout << "Prime" << endl;

	//reverse a number
	cout << endl << "2.Reverse a Number" << endl;
	cout << "Enter a number : ";
	cin >> n;
	int rev = 0;
	while (n > 0) {
		int lastDigit = n % 10;
		rev = rev * 10 + lastDigit;
		n /= 10;
	}
	cout << "Reversed Number = " << rev << endl;

	//Armstrong Number
	cout << endl << "3.Armstrong Number" << endl;
	cout << "Enter a number : ";
	cin >> n;
	int armstrong = n;
	int arm = 0;
	while (n > 0) {
		int lastDigit = n % 10;
		arm += pow(lastDigit, 3);
		n /= 10;
	}
	if (arm == armstrong)
		cout << "Armstrong" << endl;
	else
		cout << "Not Armstrong" << endl;

	cout << endl << "Enter any key to exit" ;
    _getch();
	
	return 0;
}