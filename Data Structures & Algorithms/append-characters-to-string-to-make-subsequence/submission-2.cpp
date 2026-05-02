class Solution {
public:
    int appendCharacters(string s, string t) {
        int ptr2 = 0;

        for(char c : s)
        {
            if(ptr2 == t.size())
                break;

            if(c == t[ptr2])
                ptr2++;
        }

        return t.size() - ptr2;
    }
};