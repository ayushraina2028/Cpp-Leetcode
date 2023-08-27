#include <iostream>

using namespace std;



int fun(int n) {

    if (n==0) return 0;
    cout << "Hello Ayush" << endl;

    // recursive call
    fun(n-1);
}

int main() {
    fun(5);
}