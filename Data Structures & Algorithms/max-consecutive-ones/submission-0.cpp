class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int maxNumOfConsecutiveOnes = 0;
        int tempCounter = 0;

        for(int num : nums)
        {
            if(num == 1)
            {
                tempCounter++;
            }
            if(maxNumOfConsecutiveOnes < tempCounter)
            {
                maxNumOfConsecutiveOnes = tempCounter;
            }
            if(num != 1)
            {
                tempCounter = 0; 
            }
        }

        return maxNumOfConsecutiveOnes;
    }
};