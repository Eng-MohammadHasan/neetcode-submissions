class Solution {
public:
    int reverseNumber(int num)
    {
        int reversedNum = 0;

        while(num > 0)
        {
            int remainder = num % 10;
            reversedNum = reversedNum * 10 + remainder;
            num /= 10;
        }

        return reversedNum;
    }

    bool isPalindrome(int x) {
        if(x < 0) return false;
        return x == reverseNumber(x);
    }
};