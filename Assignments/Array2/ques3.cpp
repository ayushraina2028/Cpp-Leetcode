#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;

int main() {
    // Check array is sorted or not

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
    for (int i = 0;i < n-1;i++) {

        if(array[0] >= array[1]) {
            if(array[i] > array[i+1]) {
            continue;
        }
            else {
                flag = true;
            }
        }

        else {
            if(array[i] <= array[i+1]) {
            continue;
        }
            else {
                flag = true;
                break;
        }

        }

        
    }

    if (flag == false) {
        cout << "Yes in Sorted Order" << endl;
    }
    else {
        cout << "Not in Sorted Order" << endl;
    }


}