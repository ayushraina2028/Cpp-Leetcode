# include <iostream>
# include <math.h> // for using maths
using namespace std;

// return value of this function is int
int sum(int x, int y) {
    return x + y;
}

// void means we are not returning anything
void star_t(int x) {
    for (int i = 1;i <= x;i++) {
        for (int j = 1;j <= i;j++) {
            cout << '#';
        }
        cout << endl;
    }
}

void greeting() {

    cout << "Good Evening" << endl;
    cout << "Have a nice day" << endl;

}

// main function runs first before everything
int main() {

    // function call
    greeting();

    // lets print star triangle without writing code again
    star_t(4);
    star_t(5);
    star_t(6); //see working very nicely

    // function with return
    cout << sum(3,4) << endl;
    cout << sum(45,23) << endl;

    // Some library functions builtin
    cout << min(32,55) << " ";
    cout << max(332,4432)<< " ";
    cout << sqrt(7) << " ";
    cout << endl;


}