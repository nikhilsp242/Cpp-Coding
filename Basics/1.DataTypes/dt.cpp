#include<iostream>
#include<conio.h>
using namespace std;

int main() {
    int a; //declaration
    a = 12; //initialization

    cout << "size of int = " << sizeof(a) << "bytes" << endl;

    float b;
    cout << "size of float = " << sizeof(b) << "bytes" << endl;

    char c;
    cout << "size of char = " << sizeof(c) << "bytes" << endl;

    bool d;
    cout << "size of bool = " << sizeof(d) << "bytes" << endl;

    short int s;
    cout << "size of short int = " << sizeof(s) << "bytes" << endl;

    long int l;
    cout << "size of long int = " << sizeof(l) << "bytes" << endl;

    cout << endl << "Enter any key to exit" ;
    _getch();

    return 0;
}

