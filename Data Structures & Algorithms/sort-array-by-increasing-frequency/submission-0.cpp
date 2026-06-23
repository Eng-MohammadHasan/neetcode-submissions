class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        vector<int> res;

        unordered_map<int , int> frequency;
        for(int num : nums)
        {
            frequency[num]++;
        }

        unordered_set<int> mySet;
        for(auto pair : frequency)
        {
            mySet.insert(pair.second);
        }

        vector<int> myVector(mySet.begin() , mySet.end());
        sort(myVector.begin() , myVector.end());

        for(int freq : myVector)
        {
            vector<int> tmp;
            for(auto pair : frequency)
            {
                if(pair.second == freq)
                {
                    tmp.push_back(pair.first);
                }
            }

            sort(tmp.begin() , tmp.end());
            for(int i = tmp.size() - 1 ; i >= 0 ; i--)
            {
                int repeating = frequency[tmp[i]];
                for(int j = 1 ; j <= repeating ; j++)
                {
                    res.push_back(tmp[i]);
                }
            }

            tmp.clear();
        }

        return res;
    }
};