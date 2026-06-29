class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        vector<vector<int>> result(2);

        unordered_set<int> set1;
        for(int num : nums1)
        {
            set1.insert(num);
        }

        unordered_set<int> set2;
        for(int num : nums2)
        {
            set2.insert(num);
        }

        for(int value : set1)
        {
            //list 1 
            if(!set2.count(value))
            {
                result[0].push_back(value);
            }
        }
        for(int value : set2)
        {
            //list 2 
            if(!set1.count(value))
            {
                result[1].push_back(value);
            }
        }

        return result;
    }
};