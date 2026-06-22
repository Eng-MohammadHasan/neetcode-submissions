class Solution {
public:
    int maxNumberOfBalloons(string text) {
        unordered_map<char , int> frequencyMap;

        for(char c : text)
        {
            frequencyMap[c]++;
        }

        int res = 0;

        while(true)
        {
            if(frequencyMap['b'] >= 1 &&
                frequencyMap['a'] >= 1 &&
                frequencyMap['l'] >= 2 &&
                frequencyMap['o'] >= 2 &&
                frequencyMap['n'] >= 1 
             )
             {
                res++;

            frequencyMap['b']--;
            frequencyMap['a']--;
            frequencyMap['l']--;
            frequencyMap['l']--;
            frequencyMap['o']--;
            frequencyMap['o']--;
            frequencyMap['n']--;
             }

             else 
             {
                break;
             }
        }

        return res;
    }
};