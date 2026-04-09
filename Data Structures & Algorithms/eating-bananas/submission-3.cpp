#include <algorithm>
#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int left = 1;
        int right = *max_element(piles.begin(), piles.end());
        int result = right; // to store the smallest valid k

        while (left <= right) {
            int mid = left + (right - left) / 2;
            long long sumHours = 0;

            for (int pile : piles) {
                sumHours += ceil((double)pile / mid);
            }

            if (sumHours <= h) {
                result = mid;        
                right = mid - 1;   // try smaller k
            } else {
                left = mid + 1;    // need faster speed
            }
        }

        return result;
    }
};
