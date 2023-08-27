# include <iostream>
using namespace std;

// before function name return type is written
void fun() {
    
}

int main() {

    int x = 5;
    // Functions are used to make our code clean
    for (int i = 0;i < x;i++) {
        for (int j = 0;j < i;j++) {
            cout << '#';
        }
        cout << endl;
    }

    // but i want to do this for multiple inputs without repeating code
    // use functions

}