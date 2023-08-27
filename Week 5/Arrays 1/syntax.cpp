#include <iostream>
using namespace std;

int main() {

    // declaration method 1
    int arr[7];
    for (int i = 0; i < 7;i++) {
        arr[i] = i*i;
    }

    // printing all
    for (int i = 0; i < 7;i++) {
        cout << arr[i] << " ";
    }

    cout << endl;


    // declaration method 2
    int brr[7] = {1,2,3,4,5,6,7};

    // printing all
    for (int i = 0; i < 7;i++) {
        cout << brr[i] << " ";
    }


    cout << endl;


    // declaration method 3
    int crr[] = {1,2,3,4,5,6,7,8,9,10};  // if you dont give size then you have to initialize

    // printing all
    for (int i = 0; i < 7;i++) {
        cout << crr[i] << " ";
    }


    cout << endl;


    // Taking input
    int drr[7];
    for (int i = 0; i < 7;i++) {
        cin >> drr[i];
    }

    // printing all
    for (int i = 0; i < 7;i++) {
        cout << drr[i] << " ";    // Works perfectly fine
    }  

    // declaration method 4 for int array only and not for other like float
    int size = 5, err[size];

    // There are 1D, 2D , ..... and so on arrays


    

}