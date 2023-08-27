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

        // method 1 to calculate next string
        // char x = str[i];
        // string temp = "";
        // for(int j = 0;j < len;j++) {
        //     if(x != str[j]) temp += str[j];
        // }

        // Efficient method
        string left = str.substr(0,i);
        string right = str.substr(i+1);
        permutations(ans+str[i],left+right);
    }
    return;
}

int main() {
    string str = "abc";
    
    permutations("",str);
    
}