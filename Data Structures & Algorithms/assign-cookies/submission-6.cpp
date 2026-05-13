class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        int contentChildren = 0;
        int i = 0 ,j = 0;

        sort(g.begin() , g.end());
        sort(s.begin() , s.end());

        if(s.size() == 0)
            return 0;

        while(i != g.size() && j != s.size())
        {
            if(g[i] <= s[j])
            {
                contentChildren++;
                i++;
            }
            
            j++;
        }

        return contentChildren;
    }
};