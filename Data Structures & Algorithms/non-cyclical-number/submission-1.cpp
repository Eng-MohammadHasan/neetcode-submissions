class Solution {
public: 
    int summationOfSquares(int number)
    {
        int result = 0;

        while(number > 0)
        {
            int remainder = number % 10;
            number /= 10;

            result += pow(remainder , 2);
        }

        return result;
    }

    bool isHappy(int n) 
    {
        unordered_set<int> existNumbers;
        int tempNum = n;

        while(true)
        {
            int currDigitsSummation = summationOfSquares(tempNum);

            if(currDigitsSummation == 1)
                return true;
            else
            {
                if(existNumbers.count(currDigitsSummation))
                    break;
            }

            existNumbers.insert(tempNum);
            tempNum = currDigitsSummation;
        }

        return false;
    }






};