#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {

    // built-in
    string str;
    getline(cin, str);
    sort(str.begin(), str.end());
    cout << str << endl;

    // sorting is done on based of their Ascii Value
    char ch = ' ';
    cout << (int)ch << endl; // 32 is ascii value of space 

}