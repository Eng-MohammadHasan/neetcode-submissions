class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        unordered_map<int,int> freq;
        int pairs = 0;

        for(int num : nums)
        {
            pairs += freq[num]; 
            freq[num]++;
        }

        return pairs;
    }
};