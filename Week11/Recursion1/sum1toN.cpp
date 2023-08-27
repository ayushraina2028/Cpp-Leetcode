#include <iostream>

using namespace std;

// Ulta Kaam
int recSum2(int sum, int n) {
    if(n == 0) {
        return sum;
    }
    recSum2(sum+n, n-1);
}

// Seedha kaam
int recSum(int n) {

    if(n==1 || n==0) return 1;
    int sum = n+recSum(n-1);
    return sum;

}

int main() {
    int n = 20;
    cout << recSum(n);

    cout << endl;
    cout << recSum2(0,n);
}