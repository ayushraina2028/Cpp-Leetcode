#include <iostream>
#include <string>
using namespace std;

int main() {
    // count number of vovels in a string
    string s = "ayushraina";
    int count = 0;
    for(int i = 0;s[i] != '\0';i++) {
        if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u') count++;
    }
    cout << count << endl;

    // change even positions to 'a' 
    for(int i = 0;s[i] != '\0';i++) {
        if(i%2==0) s[i] = 'a';
    }

    cout << s << endl; // working fine
    
}