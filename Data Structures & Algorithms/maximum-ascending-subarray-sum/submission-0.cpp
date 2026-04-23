class Solution {
public:
    int maxAscendingSum(vector<int>& nums) {
        int summation = nums[0] , maxSummation = nums[0];
       
        for(int i = 1 ; i < nums.size() ;i++)
        {
            if(nums[i] > nums[i - 1])
                summation += nums[i];
            
            else
                summation = nums[i];
            
            // if(summation > maxSummation)
            //     maxSummation = summation;
            maxSummation = max(maxSummation, summation);
        }
        return maxSummation;
    }
};