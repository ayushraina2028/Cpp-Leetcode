# include <iostream>
using namespace std;

int main() {
    // we will show that in arrays continuous chunk is allocated

    int arr[5];
    for (int i = 0;i < 5;i++) {
        cout << &arr[i] << " ";
    }

    cout << endl;

    // array's address is its first element first byte address
    cout << &arr << endl;
    
    // cout arr and cout &arr gives same answer
    cout << arr << " " << &arr << endl;
    

}