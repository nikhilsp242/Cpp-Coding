#include<iostream>
#include<cmath>
#include<conio.h>
using namespace std;

bool isPrime(int n) {
	for (int i = 2; i <= sqrt(n); i++) {
		if (n % i == 0) {
			return false;
		}
	}
	return true;
}

void fib(int a) {
	int p = 0, q = 1, r;
	for (int i = 0; i < a; i++) {
		cout << p << " ";
		r = p + q;
		p = q;
		q = r;
	}
	cout << endl;
}

int fact(int n) {
	if (n == 0)
		return 1;
	else 
		return n * fact(n - 1);
	
}

int combination(int n, int r) {
	int c = fact(n) / (fact(n - r) * fact(r));
	return c;
}

void pascalTriangle(int p) {
	for (int i = 0; i < p; i++) {
		for (int j = 0; j <= i; j++) {
			cout << combination(i, j) << " ";
		}
		cout << endl;
	}
}

int main() {
	int a, b;
	cout << "1.Prime Numbers Between Two Numbers" << endl;
	cout << "Enter two numbers : ";
	cin >> a >> b;
	for (int i = a; i <= b; i++) {
		if (isPrime(i)) {
			cout << i << " ";
		}
	}
	cout << endl;

	cout << endl << "2.Fibonacci Series of Given Length" << endl;
	int n;
	cout << "Enter a number : ";
	cin >> n;
	fib(n);

	cout << endl << "3.Factorial of a Number" << endl;
	int f;
	cout << "Enter a Number : ";
	cin >> f;
	cout << "Factorial = " << fact(f) << endl;

	cout << endl << "4.Calculate nCr" << endl;
	int p, q;
	cout << "Enter values for 'n' and 'r' : ";
	cin >> p >> q;
	cout << "nCr = " << combination(p, q) << endl;
	
	cout << endl << "5.Pascal Triangle" << endl;
	int t;
	cout << "Enter height of Triangle : ";
	cin >> t;
	pascalTriangle(t);

	cout << endl << "Enter any key to exit" ;
    _getch();

	return 0;
}