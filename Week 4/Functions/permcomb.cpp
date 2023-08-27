# include <iostream>
using namespace std;

// factorial is getting overflowed for numbers after 12
unsigned long int fact(int n) {
    unsigned long int f = 1;

    for (int i = 1; i <= n; i++) {
        f *= i;
    }

    return f;
}


unsigned long int combination(int n, int r) {
    unsigned long int nfact = fact(n);
    unsigned long int rfact = fact(r);
    unsigned long int nrfact = fact(n-r);
    cout << nfact << " " << rfact << " " << nrfact << " " << endl;
    unsigned long int ncr = nfact/(rfact*nrfact);
    return ncr;
}

unsigned int permutation(int n, int r) {
    unsigned long int npr = fact(n)/fact(n-r);
    return npr;
}


int main() {

    // method 1
    int n;
    cout << "Enter n: ";
    cin >> n;

    int r;
    cout <<"Enter r: ";
    cin >> r;

    
    cout << combination(n,r) << endl;
    cout << permutation(n,r) << endl;
    
    

}