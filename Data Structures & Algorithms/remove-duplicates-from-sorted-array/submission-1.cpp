class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int unique = 1;
        int numberOfUniqueElements = 1;
    
        for(int i = 1 ; i < nums.size() ; i++)
        {
            if(nums[i] != nums[unique - 1])
            {
                nums[unique++] = nums[i];
                numberOfUniqueElements++;
            }
        }

        return numberOfUniqueElements;
    }
};