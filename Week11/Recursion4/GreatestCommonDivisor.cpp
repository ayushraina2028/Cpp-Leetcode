#include <iostream>
using namespace std;

// Recursive way
int hcfByRecursion(int a, int b) {
    // Long division Method 
    int r = b % a;
    if(r == 0) return a;
    else return hcfByRecursion(r,a);

}

// Iterative Way
int hcf(int a, int b) {
    for(int i = min(a,b);i > 1;i--) {   // O(min(a,b)) => O(n)
        if(a%i == 0 && b%i == 0) return i;
    }
    return 1;
}

int main() {
    int a = 27;
    int b = 45;
    cout << hcf(a,b) << endl;
    cout << hcfByRecursion(a,b) << endl;  // Time Complexity is O(log(a+b))}