#include <iostream>
#include <string>
using namespace std;

int main() {
    string str = "123456";
    int x = stoi(str);
    cout << x << endl;

    int a = 12345;
    string s = to_string(a);
    cout << s + "6" << endl;

    string str1 = "1234567891234"; // cannot be stored in int
    long long y = stoll(str1);
    cout << y << endl;
}