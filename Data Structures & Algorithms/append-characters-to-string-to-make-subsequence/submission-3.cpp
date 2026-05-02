class Solution {
public:
    int appendCharacters(string s, string t) {
        int ptr = 0;

        for(char c : s)
        {
            if(ptr == t.size())
                break;

            if(c == t[ptr])
                ptr++;
        }

        return t.size() - ptr;
    }
};