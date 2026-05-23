class Solution {
public:
    int longestConsecutive(vector<int>& nums) {

        if(nums.empty())
            return 0;

        sort(nums.begin(), nums.end());

        int result = 1;
        int tempCounter = 1;

        for(int i = 1; i < nums.size(); i++)
        {
            if(nums[i] == nums[i-1])
                continue;

            if(nums[i] - nums[i-1] == 1)
                tempCounter++;
            else
                tempCounter = 1;

            result = max(result, tempCounter);
        }

        return result;
    }
};