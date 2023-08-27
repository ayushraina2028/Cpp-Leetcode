#include <iostream>

using namespace std;

int raisePower(int a, int b) {

    // another condition we can use b==0 return 1
    if(b==1) return a;
    int ans = a*raisePower(a,b-1);

    return ans;
}

int main() {
    int a = 2;
    int b = 4;
    cout << raisePower(a,b) << endl;
}