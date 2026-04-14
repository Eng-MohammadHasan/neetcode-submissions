class Solution {
public:
    bool isSubsequence(string s, string t) {
    int i = 0; // pointer for s
    int j = 0; // pointer for t

    while (i < s.size() && j < t.size()) {
        if (s[i] == t[j]) {
            i++; // match found → move s
        }
        j++; // always move t
    }

    return i == s.size(); // did we match all s?
}
};