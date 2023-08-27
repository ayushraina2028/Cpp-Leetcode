# include <iostream>
using namespace std;


void ayush2(float x = 4, int y = 8) {
    cout << "Ayush is: " << 4*x + y << " Years old" << endl;
}

// 4 and 8 are default values of x and y resp
void ayush(int x = 4, int y = 8) {
    cout << "Ayush is: " << 4*x + y << " Years old" << endl;
}

// We have to either give default value to both or dont give to anyone
// If we give to only few then error will come

   
int main() {

    // we will discuss 3-4 cases

    // default value of functions
    
    // case 1
    ayush();
    
    // case 2
    ayush(4,6);

    // case 3
    ayush(5);    //priority left to right

    // case 4
    ayush2(4.7);  // gives warning because first argument is int

}