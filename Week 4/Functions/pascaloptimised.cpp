# include <iostream>
using namespace std;


    
    // by using maths ncr+1 = ncr * (n-r/r+1)
    // and nc0 = 1 hence we set curr = 1;

int main() {

    // optimised version
    int n;
    cout << "Enter n: ";
    cin >> n;

    for (int i = 0;i <= n; i++) {
        int curr = 1;
        for (int j = 0;j <= i; j++) {
            cout << curr << " ";
            curr = curr*(i-j)/(j+1);

        }
        cout << endl;
    }

}