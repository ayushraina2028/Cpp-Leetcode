#include <iostream>
#include <algorithm>
#include <climits>
#include <vector>

using namespace std;
int low = 0;
int high = 0;

int binarySearch(vector <int> arr, int target) {
    low = 0;
    high = arr.size()-1;
    int mid;

    while(low <= high) {

        mid = low + (high-low) / 2;
        if(arr[mid] == target) {
            cout << "mid:" << mid << endl;
            return mid;
        }

        else if(arr[mid] < target) {
            low = mid+1;
        }

        else {
            high = mid - 1;
        }
    }

    return -1;
}

vector <int> findClosestElements(vector <int> arr, int k, int x) {

    vector <int> answer(k,0);
    int n = arr.size();
    int u_bound = -1;
    int l_bound = -1;
    int a_idx = 0;

    if (x < arr[0]) {
        for(int i = 0; i < k; i++) {
            answer[a_idx] = arr[i];
            a_idx++;
        }
        return answer;
    }
    else if (x > arr[n-1]) {
        for(int i = 0;i < k;i++) {
            answer[k-1-a_idx] = arr[n-1-i];
            a_idx++;
        }
        return answer;
    }

    int idx = -1;
    idx = binarySearch(arr, x);

    // Element Not Present
    if (idx == -1) {
        u_bound = low;
        l_bound = high;

        for(int i = 0;i < k;i++) {

            if(u_bound == n) {
                while(a_idx < k) {
                    answer[a_idx] = arr[l_bound];
                    a_idx++;
                    l_bound--;
                }
            }

            else if(l_bound == -1) {
                while(a_idx < k) {
                    answer[a_idx] = arr[u_bound];
                    a_idx++;
                    u_bound++;
                }
            }

            else if( abs(x-arr[l_bound]) > abs(x-arr[u_bound]) ) {
                answer[a_idx] = arr[u_bound];
                u_bound++;
                a_idx++;
            }
            else if( abs(x-arr[l_bound]) == abs(x-arr[u_bound]) ) {
                if(arr[l_bound] < arr[u_bound]) {
                    answer[a_idx] = arr[l_bound];
                    l_bound--;
                    a_idx++;
                }
                else {
                    answer[a_idx] = arr[u_bound];
                    u_bound++;
                    a_idx++;
                }
            }
            else {
                answer[a_idx] = arr[l_bound];
                a_idx++;
                l_bound--;
            }
        }
    }
    // Element Present
    else {
        u_bound = idx+1;
        l_bound = idx-1;
        
        answer[a_idx] = arr[idx];
        a_idx++;

        for(int i = 1; i < k;i++) {

            if(u_bound == n) {
                while(a_idx < k) {
                    answer[a_idx] = arr[l_bound];
                    a_idx++;
                    l_bound--;
                }
            }

            else if(l_bound == -1) {
                while(a_idx < k) {
                    answer[a_idx] = arr[u_bound];
                    a_idx++;
                    u_bound++;
                }
            }

            else if( abs(arr[idx] - arr[u_bound]) > abs(arr[idx] - arr[l_bound]) ) {
                answer[a_idx] = arr[l_bound];
                a_idx++;
                l_bound--;
            }
            else if( abs(arr[idx] - arr[u_bound]) == abs(arr[idx] - arr[l_bound]) ) {
                if(arr[l_bound] < arr[u_bound]) {
                    answer[a_idx] = arr[l_bound];
                    a_idx++;
                    l_bound--;
                }
                else {
                    answer[a_idx] = arr[u_bound];
                    a_idx++;
                    u_bound++;
                }
            }
            else {
                answer[a_idx] = arr[u_bound];
                a_idx++;
                u_bound++;
            }
        }
    }

    

    return answer;
}


int main() {

    
    vector <int> v = {-2,-1,1,2,3,4,5};
    for(int i=0; i<v.size(); i++) {
        cout << v[i] << " ";
    }

    int k = 7;
    int x = 3;

    cout << endl;

    vector <int> answer = findClosestElements(v, k, x);
    for(int i=0; i<answer.size(); i++) {
        cout << answer[i] << " ";
    }

    cout << endl;

    cout << low << " " << high << endl;
    
}