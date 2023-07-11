#include<iostream>
#include<string>
#include<algorithm> //for sort function
#include<conio.h>

using namespace std;

int main(){
    cout << "I.Inputing Single word to a String" << endl ;
    string str1;
    cout << "   Enter a string : " ;
    cin >> str1;
    cout << "String : " << str1 << endl;

    //different ways to declare a string
    string strn(10,'n');
    //string stru(10,'uwu')  --- Results in overflow, only one character is allowed.
    cout << endl << "strn : " << strn << endl;

    string strl = " ' This is a string ! ' 😎 " ;
    cout << endl << "strl : " << strl << endl;

    cout << endl << "Press any key to continue" << endl;
    _getch();

    //Input a line to the string
    cout << endl << "II.Inputing a Sentence to a String" << endl;
    string sent;
    cout << endl << "   Enter a sentence : " ;
    cin.ignore();
    getline(cin, sent);
    cout << "Sentence : " << sent << endl;

    cout << endl << "Press any key to continue" << endl;
    _getch();

    cout << endl << "III.String Concatination" << endl;
    string word1,word2;
    cout << "   Enter string1 : " ;
    cin >> word1;
    cout << "   Enter string2 : " ;
    cin >> word2;
    //method1
    /*word1.append(word2);
    cout << "Concatinated String : " << word1 << endl;
    */
    //method2
    cout << "Concatinated String : " << word1 + word2 << endl;

    //accessing string elements
    string acc = word1 + word2; 
    int ind;
    cout << "   Which element do you want to access from the above string ? (int) : " ; 
    cin >> ind;
    cout << acc[ind-1] ;

    //str.clear() --- to clear a string

    cout << endl << "Press any key to continue" << endl;
    _getch();

    cout << endl << "IV.Comparing Strings" << endl;
    string a,b;
    cout << "   Enter string1 : " ;
    cin >> a;
    cout << "   Enter string2 : " ;
    cin >> b;
    if(!a.compare(b)) //returns 0 if equal --- false
        cout << "Strings are equal" << endl;
    else
        cout << "Strings are not equal" << endl;

    //b.empty() --- to check if a string is empty

    cout << endl << "Press any key to continue" << endl;
    _getch();

    cout << endl << "V.Erasing Characters from a String" << endl;
    string e;
    cout << "   Enter a string : " ;
    cin >> e;
    cout << "String : " << e << endl;
    int sInd,num;
    cout << "From which index do you want to erase ? : " ;
    cin >> sInd;
    cout << "How many characters do you want to erase ? : " ;
    cin >> num;
    string erased = e.substr(sInd,num);                 //to get a substring from a string
    cout << "String after erasing : " << e.erase(sInd,num) << endl;
    cout << "Erased String : " << erased << endl;

    cout << endl << "Press any key to continue" << endl;
    _getch();

    cout << endl << "VI.Searching substrings from a String" << endl;
    string ss,sub;
    cout << "   Enter a string : " ;
    cin >> ss;
    cout << "String : " << ss << endl;
    cout << "   Enter the substring to search : " ;
    cin >> sub;
    if(ss.find(sub) != string :: npos)   //npos --- no position (in the string)
        cout << "Substring found from index " << ss.find(sub) << endl;
    else
        cout << "Substring not found :(" << endl;


    cout << endl << "Press any key to continue" << endl;
    _getch();

    cout << endl << "VII.Inserting a substring in a String" << endl;
    string str2,sub2;
    cout << "   Enter a string : " ;
    cin >> str2;
    cout << "String : " << str2 << endl;
    int pos;
    cout << " Enter the index before which the substring is to be inserted : ";
    cin >> pos;
    cout << "   Enter the substring to be inserted : " ;
    cin >> sub2;
    cout << "Inserted string : " << str2.insert(pos,sub2) << endl;
    
    //str2.length() or str2.size() --- to get the length of the string

    //stoi(str) --- To convert number string to integer
    //to_string() --- To convert to string datatype

    cout << endl << "Press any key to continue" << endl;
    _getch();

    cout << endl << "VIII.Sorting a String" << endl;
    string str3;
    cout << "   Enter a string : " ;
    cin >> str3;
    cout << "String : " << str3 << endl;
    sort(str3.begin(),str3.end());
    cout << "Sorted string : " << str3 << endl;

    cout << endl << "Press any key to exit" << endl;
    _getch();

    
    return 0;
}