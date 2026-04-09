#include <unordered_set>

class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> numbers;
        
        for(int num : nums)
        {
            numbers.insert(num);
        }

        if(nums.size() > numbers.size())
        {
            return true;
        }

        return false;
    }
};