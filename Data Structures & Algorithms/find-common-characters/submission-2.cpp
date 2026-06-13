class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
       vector<char> comparedChars;

       for(char c : words[0])
       {
            comparedChars.push_back(c);
       }

       for(int i = 1 ; i < words.size() ; i++)
       {
            string current = words[i];

            for(auto it = comparedChars.begin() ; it != comparedChars.end();)
            {
                size_t pos = current.find(*it);

                if(pos == std::string::npos)
                {
                    it = comparedChars.erase(it);
                }
                else
                {
                    current.erase(pos,1);
                    ++it;
                }
            }
       }

       vector<string> result;

       for(char c : comparedChars)
       {
            result.push_back(string(1,c));
       }

       return result;
    }
};