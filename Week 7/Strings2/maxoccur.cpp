#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

int main() {

    
    string s = "ayushrainaiisc";
    
    // method 1 O(n^2) waste solution

    // method 2 (special array of 26 size)
    vector <int> special(26,0);
    for(int i = 0;i < s.length();i++) {
        char ch = s[i];
        int ascii = (int)ch;
        special[ascii-97]++;
    }

    int max = 0;
    for(int i = 0;i < s.length();i++) {
        if(max < special[i]) max = special[i];
    }

    for(int i = 0;i < s.length();i++) {
        if(special[i] == max) {
            int ascii = i + 97;
            char ch = (char)ascii;
            cout << ch << " " << max << endl;
        }
    }






}