#include <iostream>
#include <string>

using namespace std;

void removeCharacter(string original, string answer) {
    if(original.length()==0) {
        cout << answer << endl;
        return;
    }
    char ch = original[0];
    if(ch=='a') {
        removeCharacter(original.substr(1),answer);
    }
    else {
        removeCharacter(original.substr(1),answer+ch);
    }
}

int main() {
    // skip all occurences of a character from a string
    string s = "Ayush Raina";
    string ans1 = "";

    // using for loop
    for(int i = 0; i < s.length(); i++) {
        if(s[i] != 'a') {
            ans1 += s[i];
        }
    }
    cout << ans1 << endl;

    // using recursion
    removeCharacter(s,"");
}