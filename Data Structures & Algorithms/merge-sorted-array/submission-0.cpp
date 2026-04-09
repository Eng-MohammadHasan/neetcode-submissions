#include <algorithm>
using namespace std;

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n)
    {
        int lastValidInNums1 = m - 1;
        int endOfNums2 = n - 1;
        int placeholder = m + n - 1;

        while (endOfNums2 >= 0)
        {
            if (lastValidInNums1 >= 0 && nums1[lastValidInNums1] > nums2[endOfNums2])
            {
                nums1[placeholder] = nums1[lastValidInNums1];
                lastValidInNums1--;
            }
            else
            {
                nums1[placeholder] = nums2[endOfNums2];
                endOfNums2--;
            }
            placeholder--;
        }
    }
};