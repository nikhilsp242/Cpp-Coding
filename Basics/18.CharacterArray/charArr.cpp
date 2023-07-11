#include<iostream>
#include<cstring>
#include<string>
#include<conio.h>

using namespace std;

int main(){
    char a[50] = "Character Array!";
    int i = 0;

    //printing the characters
    while(a[i] != '\0'){
        cout << a[i++] ;
    }
    cout << endl << "Length of char : " << i <<endl;

    int n;
    cout << "   Enter size of array : " ;
    cin >> n;
    char arr[n+1];
    cout << "   Enter the characters : " ;
    cin >> arr;
    i = 0;
    while(arr[i] != '\0'){
        cout << "|" << arr[i++] ;
    }
    cout << "|" << endl << "Length of char : " << i <<endl;

    cout << endl << "Enter any key to continue" << endl;
    _getch();

    cout << endl << "Check Palindrome" << endl;
    cout << "   Enter size of array : " ;
    cin >> n;
    char pal[n+1];
    cout << "   Enter the character : ";
    cin >> pal;
    int l = 0, r;
    for (r = 0; pal[r] != '\0'; r++) {}
    --r;
    bool palindrome = true;
    while (l <= r) {
        if (pal[l++] != pal[r--]) {
            palindrome = false;
            break;
        }
    }
    if(palindrome)
        cout << "Palindrome" << endl;
    else
        cout << "Not a Palindrome" << endl;

    cout << endl << "Enter any key to continue" << endl;
    _getch();

    cout << endl << "Largest Word in a Sentence" << endl;
    string sent;
    cout << "Enter a Snetence : " ;
    cin.ignore();
    getline(cin,sent);
    int sl = sent.length();
    char war[sl + 1];
    strcpy(war, sent.c_str());      // Convert the string to a character array

    cout << "Character Array: " << war << endl;
    string word,bigWord;
    for (int i = 0; i < sl; i++) {
        if (war[i] == ' ') {
            if (word.length() > bigWord.length()) {
                bigWord = word;
            }
            word.clear();
        } else {
            word += war[i];
        }
    }

    // Check if the last word is the largest
    if (word.length() > bigWord.length()) {
        bigWord = word;
    } 

    cout << "Largest word : " << bigWord << endl;

    cout << endl << "Enter any key to exit";
    _getch();
    
    return 0;
}