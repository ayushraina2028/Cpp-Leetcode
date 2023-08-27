# include <iostream>
using namespace std;


int fact(int n) {
    int f = 1;

    for (int i = 1; i <= n; i++) {
        f *= i;
    }

    return f;
}


int combination(int n, int r) {
    int nfact = fact(n);
    int rfact = fact(r);
    int nrfact = fact(n-r);
    int ncr = nfact/(rfact*nrfact);
    return ncr;
}

int main() {

    // ith row jth column element is icj
    int n;
    cout << "Enter n: ";
    cin >> n;

    for (int i = 0;i < n; i++) {
        for (int j = 0;j <= i; j++) {
            cout << combination(i,j) << " ";
        }
        cout << endl;
    }

    // but this one is too costly method 
    // Lets try to optimise it
    // by using maths ncr+1 = ncr * (n-r/r+1)
    


}

