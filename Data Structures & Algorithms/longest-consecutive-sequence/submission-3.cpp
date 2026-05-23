class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        sort(nums.begin() , nums.end());
        int result = 1 , tempCounter = 1;

        if(nums.size() < 1)
            return 0;
        else
        {
            for(int i = 1 ; i < nums.size() ; i++)
            {
                if(nums[i] == nums[i-1])
                    continue;

                if(nums[i] - nums[i - 1] == 1)
                    tempCounter++;
                
                else
                    tempCounter = 1;
                
                result = max(result ,tempCounter);

            }
        }
        return result;
    }
};
