#include <iostream>
#include <algorithm>
#include <climits>
#include <vector>
using namespace std;

void display(vector <int> v) {
    for(int i = 0; i < v.size();i++) {
        cout << v[i] << " ";
    }
    cout << endl;
}

int maxProfit2(vector <int> prices) {
    int minimum = prices[0];
    int profit = 0;
    int n = prices.size();
    int x;
    
    for(int i = 1;i < n;i++) {

        x = prices[i] - minimum;
        if(profit < x) {
            profit = x;
        }
        
        if(minimum > prices[i]) {
            minimum = prices[i];
        }

    }

    return profit;
}

int maxProfit(vector<int> &prices) {

    // this is correct but not efficient
    int n = prices.size();
    vector <int> profit_array(n);
    int profit = -1;
    int max_profit = 0;

    for(int i = 0;i < n;i++) {
        int min = prices[i];
        

        for(int j = i + 1;j < n;j++) {
            if(prices[j] > min && (profit < prices[j] - min)) {
                profit = prices[j] - min;
            }

            if(max_profit < profit) {
                max_profit = profit;
            }

        }
        
    }
    

    return max_profit;
}



int main() {
    
    vector <int> v;
    
    v.push_back(7);
    v.push_back(1);
    v.push_back(5);
    v.push_back(3);
    v.push_back(6);
    v.push_back(4);
    

    display(v);

    // O(n^2) solution
    cout << "Max Profit is: " << maxProfit(v) << endl;

    // O(n) Solution
    cout << "Max Profit is: " << maxProfit2(v) << endl;

}