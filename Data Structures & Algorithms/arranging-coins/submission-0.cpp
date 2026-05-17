class Solution {
public:
    long long coinsNeeded(int mid)
    {
        return 1LL * mid * (mid + 1) / 2;
    }

    int arrangeCoins(int n) {
        int left = 0 , right = n;
        int largestValidCompletedRow = 0;

        while(left <= right)
        {
            int mid = left + (right - left) / 2;

            long long totalCoins = coinsNeeded(mid);
            if(totalCoins == n)
            {
                return mid;
            }

            if(totalCoins > n)
            {
                right = mid - 1;
            }
            else
            {
                // save current valid answer (largestValidCompleteRow)
                largestValidCompletedRow = mid;
                left = mid + 1;
            }
        }

        return largestValidCompletedRow;
    }
};