#include<iostream>
#include<conio.h>

using namespace std;

void increment(int* a) {
    (*a)++;
}

int main(){
    int a = 10;
    int *ptr = &a;

    cout << "ptr --> " << ptr << endl;
    cout << "&ptr -->" << &ptr << endl; 
    cout << "*ptr --> " << *ptr << endl;

    //changing the value of 'a' using ptr
    *ptr = 20;
    cout << endl << "After changing the value : " << endl;
    cout << "&a --> " << &a << endl; 
    cout << "a --> " << a << endl << endl;

    //pointer arithmetic     //++,--,+,-
    ptr++;
    cout << "ptr++ -->" << ptr << endl;
    cout << "&a -->" << &a << endl;
    ptr--;
    cout << "ptr-- -->" << ptr << endl;
    cout << "&a -->" << &a << endl;

    cout << endl << "Press any key to continue" << endl;
    _getch();

    // pointers and array
    cout << endl << "Poniters and Array" << endl;
    int arr[5] = {2,4,5,7,9};
    cout << "arr --> " ;
    for(int i = 0; i < 5 ; i++){
        cout << "|" << arr[i];
    }
    cout << "|" << endl;
    cout << "*arr --> " << *arr << endl;
    cout << "*(arr+1) --> " << *(arr+1) << endl;
    cout << "*(arr+2) --> " << *(arr+2) << endl;
    cout << "*(arr+4) --> " << *(arr+4) << endl;
    cout << "*arr + 5 --> " << *arr + 5 << endl;

    //printing the elements using pointer
    cout << endl << "Printing using the arr pointer" << endl;
    cout << "arr --> " ;
    for(int i = 0; i < 5 ; i++){
        cout << "|" << *(arr+i);
    }
    cout << "|" << endl;

    cout << endl << "Press any key to continue" << endl;
    _getch();

    //pointer to pointer
    cout << endl << "Pointer to pointer" << endl;
    int b = 25;
    int *b1 = &b;
    int **b2 = &b1;
    cout << "b = " << b << endl;
    cout << "*b1 = " << *b1 << endl;
    cout << "**b2 = " << **b2 << endl;
    cout << "*b2 = " << *b2 << endl;

    cout << endl << "&b = " << &b << endl;
    cout << "b1 = " << b1 << endl;
    cout << endl << "&b1 = " << &b1 << endl;
    cout << "b2 = " << b2 << endl;

    cout << endl << "Press any key to continue" << endl;
    _getch();

    //Passing pointers to function // pass by reference
    cout << endl << "Pointers in functions" << endl;
    int f = 14;
    int *fp = &f;
    cout << "f = " << f << endl;
    increment(fp);
    cout << "incrementing by passing pointer of f : " << f << endl;
    increment(&f) ; 
    cout << "incrementing by passing address of f : " << f << endl;

    cout << endl << "Press any key to exit" << endl;
    _getch();

    return 0;
}