class Solution {
public:
    int lengthOfLastWord(string s) {
      
        int counter = 0;
     
        while(!s.empty() && s.back() == ' ')
        {
            s.pop_back(); //trim right whitespaces
        }


        int i = s.length() - 2; 
        while(!s.empty())
        {
            counter++;
            if(s[i] == ' ')
            {
                break;
            }

            i--;
            s.pop_back();
        }
    
        return counter;
    }
};