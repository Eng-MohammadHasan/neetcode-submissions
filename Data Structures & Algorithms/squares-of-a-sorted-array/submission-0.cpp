#include <algorithm>
using namespace std;

class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums)
    {
        int lastDigit = nums.size() - 1;
        int right = lastDigit;
        int left = 0;
        int pos = lastDigit;

        vector<int> vResult(nums.size());
        while(left <= right)
        {
            if(abs(nums[left]) > abs(nums[right]))
            {
              vResult[pos] = nums[left] * nums[left];
              left++;
            }
            else
            {
              vResult[pos] = nums[right] * nums[right];
              right--;
            }

            pos--;
        }

    return vResult;
    }
};