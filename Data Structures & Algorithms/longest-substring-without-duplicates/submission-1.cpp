class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int l = 0 , r = 0 , result = 0;

        unordered_set<int> window;
        
        for(char c : s)
        {   
            while(window.count(s[r]))
            {
                window.erase(s[l]);
                l++;
            }
            
            window.insert(s[r]);
            if(result < window.size())
            {
                result = window.size();
            }
            r++;
        }
        

        return result;
    }
};
