# include <iostream>
using namespace std;

int main() {

    // like integers if i need to initialize the pointers
    // we can do it with NULL

    int* p;
    cout << p << endl;  // generates random address

    // sometimes it gives different address when run different times
    // we will reserve its address

    int* ptr = NULL;
    cout << ptr << endl;  // as initialized to NULL output comes as 0

    // but the pointer has its own address also
    cout << &ptr << endl;
    


}