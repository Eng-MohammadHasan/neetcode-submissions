#include <algorithm>
using namespace std;

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
       vector<int> temp;
       for(int num : nums)
       {
            if(num != 0)
            {
                temp.push_back(num);
            }
       }

       for(int i = 0 ; i < nums.size() ; i++)
       {
            if(i < temp.size())
            {
                nums[i] = temp[i];
            }
            else
            {
                nums[i] = 0;
            }
       }
    }
};