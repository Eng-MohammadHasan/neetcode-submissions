class Solution {
public:
    int maxArea(vector<int>& heights) {
        int maxAmountInContainer = 0;
        int left = 0; 
        int right = heights.size() - 1;
        int tempContainer , minBarHeight;

        while(left < right)
        {
            minBarHeight = min(heights[left] , heights[right]);
            tempContainer = (right - left) * minBarHeight;

            if(maxAmountInContainer < tempContainer)
            {
                maxAmountInContainer = tempContainer;
            }

            if(heights[left] < heights[right])
            {
                left++;
            }
            else
            {
                right--;
            }
        }

        return maxAmountInContainer;
    }
};
