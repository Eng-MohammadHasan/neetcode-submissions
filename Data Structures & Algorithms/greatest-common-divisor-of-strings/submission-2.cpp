class Solution {
public:
    string gcdOfStrings(string str1, string str2) {

        int minLen = min(str1.size(), str2.size());

        for(int len = minLen; len >= 1; len--)
        {
            if(str1.size() % len != 0 || str2.size() % len != 0)
                continue;

            string candidate = str1.substr(0, len);

            string build1 = "";
            string build2 = "";

            int times1 = str1.size() / len;
            int times2 = str2.size() / len;

            for(int i = 0; i < times1; i++)
                build1 += candidate;

            for(int i = 0; i < times2; i++)
                build2 += candidate;

            if(build1 == str1 && build2 == str2)
                return candidate;
        }

        return "";
    }
};