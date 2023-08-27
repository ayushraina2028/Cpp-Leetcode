#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {

    
    string s = "ayushraina";
    string t = "rainaayush";  

    sort(s.begin(), s.end());
    sort(t.begin(), t.end());


    cout << s <<  "  " << t << endl;
    if(s==t) cout << 1 << endl;
    else cout << 0 << endl;
    



}