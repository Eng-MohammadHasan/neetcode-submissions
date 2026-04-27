class Solution {
public:
    bool validWordAbbreviation(string word, string abbr) {
        int number = 0;
        int wordPtr = 0;

        for(int i = 0 ; i < abbr.size() ; i++)
        {
            if(isdigit(abbr[i]))
            {
                if(number == 0 && abbr[i] == '0')
                  return false;
                  
                number = number * 10 + (abbr[i] - '0');
            }
            else
            {
                // apply skipping first
                wordPtr += number;
                number = 0;
                
                // check bound or mismatch
                if(wordPtr >= word.size() || word[wordPtr] != abbr[i])
                  return false;  
                
                wordPtr++; // move after matching character :)
            }
        }
        
        wordPtr += number;
        return wordPtr == word.size();
    }
};