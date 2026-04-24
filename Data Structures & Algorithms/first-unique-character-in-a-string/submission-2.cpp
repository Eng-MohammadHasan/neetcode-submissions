class Solution {
public:
    int firstUniqChar(string s) {
        int res = s.size();

        for (char ch = 'a'; ch <= 'z'; ch++) {
            int firstIndex = s.find(ch);
            if (firstIndex != string::npos && s.rfind(ch) == firstIndex) {
                res = min(res, firstIndex);
            }
        }

        return res == s.size() ? -1 : res;
    }
};