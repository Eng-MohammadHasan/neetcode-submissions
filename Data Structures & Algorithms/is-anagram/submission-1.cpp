
// #include <unordered_set>
// using namespace std;

class Solution {
public:
    bool isAnagram(string s, string t) {
       // unordered_set<int>    
       // 97 - 122 letters from a to z    
       vector<int> counter1(26 , 0);
       vector<int> counter2(26 , 0);

       if(s.size() != t.size())
       {
        return false;
       }

       for(char c : s)
       {
          int ascii_val = static_cast<int>(c);
          counter1[ascii_val - 97]++;
       }
       
       for(char c : t)
       {
          int ascii_val = static_cast<int>(c);
          counter2[ascii_val - 97]++;
       }

       for(int i = 0 ; i < 26 ; i++)
       {
          if(counter1[i] != counter2[i])
          {
            return false;
          }
       }

    return true;
    }
};
