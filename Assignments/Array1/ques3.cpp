#include <iostream>
#include <climits>
using namespace std;

int main() {
    // find minimum element in one pass

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

    int min = INT_MAX;

    for(int i = 0;i < n;i++) {
        if(min > array[i]) {
            min = array[i];
        }
    }

    cout << "Minimum element is: " << min << endl;

}