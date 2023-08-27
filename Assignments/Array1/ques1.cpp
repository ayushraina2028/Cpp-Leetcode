#include <iostream>
using namespace std;

int main() {
    // calculate product of all elements in a array

    cout << "Enter number of elements" << endl;
    int n;
    cin >> n;
    
    int array[n];

    for(int i = 0;i < n;i++) {
        cout << "Enter element " << i+1 << endl;
        cin >> array[i];
    }   

    cout << "Entered array is: ";
    for (int i = 0;i < n; i++) {
        cout << array[i] << " ";
    }

    cout << endl;

    // Multiplication
    int mult = 1;
    for (int i = 0;i < n; i++) {
        mult *= array[i];
    }

    cout << "required multiplication is: " << mult;

}