#include <iostream>
#include<conio.h>

using namespace std;

int main() {
    int number;

    //conditional operator
    cout << "1.Conditional Operation" << endl;
    cout << "Enter a number: ";
    cin >> number;

    string result = (number % 2 == 0) ? "even" : "odd";

    cout << number << " is " << result << endl ;

    //cast operator
    cout << endl << "2.Cast Operation" << endl;
    double f;
    cout << "Enter a float value :";
    cin >> f;
    cout << "Interger value = " << int(f) << endl;

    //comma operator
    cout << endl << "3.Comma Operation" << endl;
    int a, b, c;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    c = (a, b, a + b);

    cout << "a: " << a << endl;
    cout << "b: " << b << endl;
    cout << "c: " << c << endl;

    cout << endl << "Enter any key to exit" ;
    _getch();

    return 0;
}
