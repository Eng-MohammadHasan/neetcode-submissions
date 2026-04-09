class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        // two pointers left and right ,
        // once you find an odd on left immediatly swap with first even you found in right 

        int left = 0 , right = nums.size() - 1;
        
        while(left < right)
        {
            if(nums[left] %2 != 0 && nums[right] %2 == 0)
            {
                swap(nums[left] , nums[right]);
                left++;
                right--;
            }
            else if(nums[left] %2 != 0 && nums[right] != 0)
            {
                right--;
            }
            else
            {
                left++;
            }
        }
        return nums;
    }
};