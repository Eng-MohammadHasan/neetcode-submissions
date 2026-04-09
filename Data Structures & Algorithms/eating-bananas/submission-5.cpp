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
            int count = 0;
do {
    sumHours += ceil((double)piles[count] / mid);
    if (count == piles.size() - 1) {
        break;
    }
    count++;
    if (sumHours > h) {
        break;
    }

} while (true);
            if (sumHours <= h) {
                result = mid;        
                right = mid - 1;  
            }
            else
            {
                left = mid+1;
            }
        }
        return result;
    }
};
