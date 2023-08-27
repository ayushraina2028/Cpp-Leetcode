#include <iostream>

using namespace std;


// Without Extra Parameter
void recursivePrint4(int n) {
    
    if(n==0) return;
    recursivePrint4(n-1);
    cout << n << " ";
    
}

// Without Extra Parameter
void recursivePrint3(int n) {

    if(n==0) return;

    static int i = 1;
    cout << i << " ";
    i++;
    recursivePrint3(n-1);
}

// Extra Parameter used
void recursivePrint2(int i, int n) {
    if(i>n) return;

    cout << i << " ";
    recursivePrint2(i+1, n);
}

void recursivePrint(int n) {

    if(n==0) return;
    else if(n < 0) return;

    cout << n << " ";
    recursivePrint(n-1);

}

int main() {
    int n = 20;

    // print n to 1
    recursivePrint(n);

    cout << endl;

    // print 1 to n 
    recursivePrint2(1,n);

    cout << endl;

    // print 1 to n 
    recursivePrint3(n);

    cout << endl;

    // print 1 to n 
    recursivePrint4(n);


}