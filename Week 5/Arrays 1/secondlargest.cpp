# include <iostream>

using namespace std;

int main() {
    // Find Second Largest Element (Application of Linear Search), also find second minimum

    // number of elements
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    // Taking array input
    int arr[n];
    for (int i = 0; i < n;i++) {
        cout << "Enter element " << i+1 << " : ";
        cin >> arr[i];
    }

    // for maximum
    int max = arr[0], min = arr[0];
    for (int i = 1;i < n;i++) {
        if (max < arr[i]) {
            max = arr[i];
        }
    }

    // second max
    int second_max = arr[0];
    for (int i = 1;i < n;i++) {
        if (second_max < arr[i] && arr[i] != max) {
            second_max = arr[i];
        }
    }

    // for minimum
    for (int i = 1;i < n;i++) {
        if (min > arr[i]) {
            min = arr[i];
        }
    }

    // for second minimum
    int second_min = max;
    for (int i = 0;i < n;i++) {
        if (second_min > arr[i] && arr[i] != min) {
            second_min = arr[i];
        }
    }
    
    cout << "Entered array: ";

    for (int i = 0;i < n;i++) {
        cout << arr[i] << " ";
    }

    cout << endl;

    cout << "Maximum value is: " << max << endl;
    cout << "Minimum value is: " << min << endl;
    cout << "Second Maximum value is: " << second_max << endl;
    cout << "Second Minimum value is: " << second_min << endl;



    
    
}