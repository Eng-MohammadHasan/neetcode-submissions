class Solution {
public:
    int compress(vector<char>& chars) {
       string s = "";

       for(int i = 0 ; i < chars.size(); i++)
       {    
            char current = chars[i];
            int countAdjacent = 1;

            while(i + 1 < chars.size() && chars[i] == chars[i + 1])
            {
                countAdjacent++;
                i++;
            }
            
            // push character
            s.push_back(current);

            if(countAdjacent > 1)
            {
                string t = to_string(countAdjacent);
                for(char c : t)
                    s.push_back(c);
            }
         }
          
       for(int i = 0 ; i < s.size() ; i++)
       {
            chars[i] = s[i];
       }
       
       return s.size();
    }
};