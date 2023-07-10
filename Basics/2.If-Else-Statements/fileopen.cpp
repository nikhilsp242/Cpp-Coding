#include<iostream>
#include <fstream>
#include<conio.h>

using namespace std;



int main() {
    ifstream inputFile("input.txt");
    ofstream outputFile("output.txt");

    int savings;
    inputFile >> savings;

    if (savings > 5000) {
        if (savings > 10000) {
            outputFile << "Goa";
        }
        else {
            outputFile << "shopping";
        }
    }
    else if (savings > 2000) {
        outputFile << "food";
    }
    else {
        outputFile << "home";
    }

    inputFile.close();
    outputFile.close();

    cout << endl << "Enter any key to exit" ;
    _getch();

    return 0;
}
    