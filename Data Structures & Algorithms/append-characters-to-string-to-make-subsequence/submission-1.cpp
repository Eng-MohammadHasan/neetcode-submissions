class Solution {
public:
    int appendCharacters(string s, string t) {
        int ptr2 = 0;

        for(int i = 0 ; i < s.size() ; i++)
        {
            if(ptr2 >= t.size())
                break;

            if(s[i] == t[ptr2])
            {
                ptr2++;
            }
        }

        return t.size() - ptr2;
    }
};