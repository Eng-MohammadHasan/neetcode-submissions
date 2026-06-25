class Solution {
public:
    int findLucky(vector<int>& arr) {
       unordered_map<int , int> frequency;

       for(int num : arr)
       {
          frequency[num]++;
       }

       int luckyNumber = -1;

       for(auto p : frequency)
       {
         if(p.first == p.second)
         {
            luckyNumber = max(luckyNumber , p.first);
         }
       }

       return luckyNumber;
    }
};