#include <algorithm>
using namespace std;

class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
       vector<int> vResult;

        for(int i = 0 ; i < arr.size() ; i++)
        {
            if(i == arr.size() - 1)
            {
                vResult.push_back(-1);
            }
            else
            {
               auto itr = max_element(arr.begin() + i + 1 , arr.end());

               vResult.push_back(*itr); 
            }

            
        }

        return vResult;
    }
};