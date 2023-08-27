#include <iostream>
#include <climits>
#include <math.h>
using namespace std;



int power(int x, int n) {
    
    if(n==0) return 1;
    if(n==1) return x;
    int ans = power(x, n/2);

    if(n % 2 == 0) {
        return ans*ans;
    }
    else {
        return ans*ans*x;
    }

}

int main() {
    int base = 2;
    int exponent = 7;
    int answer = power(base, exponent);
    cout << answer << endl;

}