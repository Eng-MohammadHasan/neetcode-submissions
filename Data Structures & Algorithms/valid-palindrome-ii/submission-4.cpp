class Solution {
public:

    bool isPalindrome(string & s, unsigned short l ,  unsigned short r)
    {
        while(l < r)
        {
            if(s[l] != s[r])
                return false;
            l++;
            r--;
        }

        return true;
    }
    
    bool validPalindrome(string s) {
        unsigned short last = s.length() - 1;
        unsigned short first = 0;

        while(first < last)
        {
            if(s[first] != s[last])
            {
                return isPalindrome(s , first + 1 , last) ||
                    isPalindrome(s , first , last - 1);
            }
            first++;
            last--;
        }

        return true;
    }
};