class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> mp;
        vector<vector<string>> result;

        for(string word : strs)
        {
            string key = word;
            sort(key.begin() , key.end()); 

            mp[key].push_back(word);
        }

        for(auto &p : mp)
        {
            result.push_back(p.second);
        }
        return result;
    }
};
