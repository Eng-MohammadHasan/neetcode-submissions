class Solution {
public:
    int lengthOfLastWord(string s) {
        int counter = 0;

        // remove trailing spaces
        while (!s.empty() && s.back() == ' ') {
            s.pop_back();
        }

        // count last word
        while (!s.empty() && s.back() != ' ') {
            counter++;
            s.pop_back();
        }

        return counter;
    }
};