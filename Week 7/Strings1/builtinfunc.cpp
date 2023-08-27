#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    string str = "my name is ayush raina";

    // we can find size
    cout << str.size() << endl; // Null character is not counted here

    // we can use length also
    cout << str.length() << endl; // Null character is not counted here

    // push_back
    string str1 = "ayush";
    str1.push_back(' ');
    str1.push_back('r');
    cout << str1 << endl;

    //pop_back
    str1.pop_back();
    str1.pop_back();
    cout << str1 << endl;

    // '+' operator(Important)
    string s = "abc";
    string t = "def";

    // methods to print
    cout << s+t << endl;
    cout << s + "def" << endl; //(append)
    cout << s + 'd' << endl;
    cout << "def" + s << endl; //(add from start)

    // reverse() function
    string a = "abcdef";
    cout << a << endl;
    reverse(a.begin(), a.end()); // include <algorithm> fot this
    cout << a << endl;
    

}
