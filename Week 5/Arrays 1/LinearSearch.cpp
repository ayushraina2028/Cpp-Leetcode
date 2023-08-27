# include <iostream>
using namespace std;

int main() {
    // Find element x in array. take array and x as input

    // number of elements
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    // Element to search for
    int x;
    cout << "Enter x: ";
    cin >> x;
    
    // Taking array input
    int arr[n];
    for (int i = 0; i < n;i++) {
        cout << "Enter element " << i+1 << " : ";
        cin >> arr[i];
    }

    // Linear Search
    for (int i = 0; i < n;i++) {
        if (arr[i] == x) {
            cout << "Element x is present at index: " << i << endl;
        }
        
    }

    // but if element repeats then multiple answers will come
    // i also cant use else because if element is not present then else will be true all times

    // Linear Search Optimised
    bool flag = false;
    int index = 0;
    for (int i = 0; i < n;i++) {
        if (arr[i] == x) {
            flag = true;
            index = i;
            break;
        }
        
    }
    if (flag == true) {
        cout << "Element is present at index: " << index << endl;
    }
    else {
        cout << "Element is absent" << endl;
    }
    
}