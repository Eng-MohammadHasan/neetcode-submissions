class Solution {
public:
    void reverseString(vector<char>& s) {
        vector<char> s2 = s;
        int lastDigit = s.size() - 1;
        char temp;

        for(int i = 0 ; i < s.size() / 2 ; i++)
        {
            temp = s[i];
            s[i] = s[lastDigit];
            s[lastDigit] = temp;
            lastDigit--;
        }
    }
};