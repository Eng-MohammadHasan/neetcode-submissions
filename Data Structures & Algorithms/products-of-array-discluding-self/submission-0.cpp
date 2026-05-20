class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> prefix;
        vector<int> suffix(nums.size());
        vector<int> result(nums.size());

        prefix.push_back(1);// prefix products for first element considered as 1
        for(int i = 1 ; i < nums.size() ; i++)
        {
            prefix.push_back(prefix[i - 1] * nums[i - 1]);
        }

        suffix[nums.size() - 1] = 1; // suffix products for the last element considered as 1
        for(int i = nums.size() - 2 ; i >= 0 ; i--)
        {
            suffix[i] = suffix[i + 1] * nums[i + 1];
        }

        for(int i = 0 ; i < nums.size() ; i++)
        {
           result[i] = prefix[i] * suffix[i];
        }

        return result;
    }
};
