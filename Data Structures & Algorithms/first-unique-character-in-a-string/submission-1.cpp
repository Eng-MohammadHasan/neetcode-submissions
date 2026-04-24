class Solution {
public:
    int firstUniqChar(string s) {
        int n = s.length();
        vector<int>dc(26, 0);
        for(int i=0; i<n; i++)
            dc[s[i]-'a']++;
        
        for(int i=0; i<n; i++)
        {
            if(dc[s[i]-'a'] == 1)
                return i;
        }
        return -1;
    }
};