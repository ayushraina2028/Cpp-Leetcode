
class Solution {
public:
    int mySqrt(int x) {
        
        int low = 0;
        int high = x;
        int mid;

        long long m = (long long)mid;
        long long y = (long long)x;

        while(low <= high) {
            mid = low + (high-low)/2;
            long long m = (long long)mid;
            long long y = (long long)x;
            
            if(m*m == y) {
                return mid;
            }

            else if(m*m < y) {
                low = mid + 1;
            }

            else {
                high = mid - 1;
            }



        }


        return high;

    }
};