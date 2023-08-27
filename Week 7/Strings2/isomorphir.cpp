#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <sstream>

using namespace std;

bool isIsomorphic(string s, string t) {

    if(s.length() != t.length()) return false;

    vector <int> v(150, 1000);
    for(int i = 0; i < s.length(); i++) {
        int idx = int(s[i]);
        if(v[idx] == 1000) v[i] = s[i] - t[i];
        else if(v[idx] != s[i] - t[i]) return false;

    }

    for(int i = 0;i < 150;i++) {
        v[i] = 1000;
    }

    for(int i = 0; i < s.length(); i++) {
        int idx = int(t[i]);
        if(v[idx] == 1000) v[i] = s[i] - t[i];
        else if(v[idx] != s[i] - t[i]) return false;

    }

    return true;
}


int main() {

    string s = "paper";
    string t = "title";

    bool flag = isIsomorphic(s, t);
    cout << flag << endl;
    
}