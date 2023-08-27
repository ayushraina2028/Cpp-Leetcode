#include <iostream>
#include <string>

using namespace std;

void permutations(string ans, string str) {
    int len = str.length();
    if(str == "") {
        cout << ans << endl;
        return;
    }
    for(int i=0;i < len;i++) {

        char x = str[i];
        string temp = "";
        // creating new string to recurse
        for(int j = 0;j < len;j++) {
            if(x != str[j]) temp += str[j];
        }
        permutations(ans+str[i],temp);
    }
    return;
}

int main() {
    string str = "abcde";
    
    permutations("",str);
    
}