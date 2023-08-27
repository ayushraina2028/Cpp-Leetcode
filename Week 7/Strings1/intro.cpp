#include <iostream>
using namespace std;

int main() {
    // strings are basically character arrays
    char str[] = {'a', 'b', 'c', 'd', 'e'};

    // printing
    for(int i = 0;i < 5;i++) {
        cout << str[i] << " ";
    }

    cout << endl;
    cout << endl;

    // lets explore some more things
    // at the end of every character array, null character is added '\0'  

    // we cannot store backslash as character 
    // cout << '\' << endl;  => gives warning

    // '\n' gives space and 't' gives a tab i.e 4spaces
    cout << "abc\ndef" << endl;
    cout << endl;
    cout << "abc\tdef" << endl;


    // null character
    char ch = '\0';
    cout << ch << endl;

    // it has 0 Ascii value
    cout << (int)ch << endl;
    cout << "next" << endl;

    // see proof 
    cout << str[5] << endl;
    cout << (int)str[5] << endl;
    cout << endl;

    // another method to print 
    for(int i = 0; str[i] != '\0';i++) {
        cout << str[i] << " ";
    }
    cout << endl;
    cout << endl;


    // another method
    cout << str;
    cout << endl;
}