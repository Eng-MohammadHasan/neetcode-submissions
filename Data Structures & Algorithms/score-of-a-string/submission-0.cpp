#include <cmath>

class Solution {
public:
    int scoreOfString(string s) {
        int score = 0;
        unsigned short left , right;

        for(int i = 0 ; i < s.length() - 1; i++)
        {
          left = static_cast<int>(s[i]);
          right = static_cast<int>(s[i + 1]);
          score += abs(right - left);
        }

        return score;
    }
};