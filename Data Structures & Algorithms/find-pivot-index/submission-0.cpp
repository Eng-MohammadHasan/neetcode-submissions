class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int totalSummation = 0;
        int leftSum = 0;

        for(int num : nums)
        {
            totalSummation += num;
        }

        for(int i = 0 ; i < nums.size() ; i++)
        {
            if(leftSum == totalSummation - leftSum - nums[i])
            {
                return i;
            }

            leftSum += nums[i];
        }
                                                          
        return -1;
    }
};