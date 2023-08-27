#include <iostream>
#include <vector>
using namespace std;


int main() {
    
    // Leetcode 861 : Score after flipping matrix

    // there  must be all ones in 1st colummn
    // flip columns where no of zeroes > no of ones

    vector <vector <int> > v;
    v.push_back({0,0,1,1});
    v.push_back({1,0,1,0});
    v.push_back({1,1,0,0});

    int rows = v.size();
    int columns = v[0].size();

    // traverse 1 time to make all ones in rows 
    for(int i = 0;i < rows;i++) {
        if(v[i][0] == 0) {
            for(int j = 0;j < columns;j++) {
                if (v[i][j] == 0) {
                    v[i][j] = 1;
                }
                else {
                    v[i][j] = 0;
                }
            }
        }
    }  

    // flip the columns where number of zeroes > number of ones
    for (int j = 0;j < columns;j++) {
        int no_zeroes = 0;
        int no_ones = 0;

        // counting zeroes and ones
        for(int i = 0;i < rows;i++) {
            if(v[i][j] == 0) {
                no_zeroes++;
            } 
            else {
                no_ones++;
            }

        }

        // here we are still inside loop and counted zeroes and ones

        // flip if ones are less in number than zeroes
        if (no_zeroes > no_ones) {
            for(int i = 0;i < rows;i++) {
                if (v[i][j] == 0) {
                    v[i][j] = 1;
                }
                else {
                    v[i][j] = 0;
                }
            }
        }
    }


    // Now we have changed our matrix but i need to convert to decimal
    int sum = 0;
    for(int i = 0;i<rows;i++) {
        int x = 1;
        for(int j = columns-1;j >= 0;j--) {
            sum += v[i][j]*x;
            x *= 2;
        }
    }

    cout << sum << endl;
}