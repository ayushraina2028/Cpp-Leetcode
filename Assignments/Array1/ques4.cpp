#include <iostream>
#include <climits>
using namespace std;

int main() {
    // Given an array, predict if the array contains duplicates or not.

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

    bool flag = false;
    for (int i = 0;i < n;i++) {
        for (int j = i + 1;j < n;j++) {
            if(array[i] == array[j]) {
                flag = true;
                break;
            }
            
        }
    }

    if (flag == false) {
        cout << "No it does not contains any duplicates" << endl;
    }
    else {
        cout << "Yes it contains duplicates" << endl;
    }


}