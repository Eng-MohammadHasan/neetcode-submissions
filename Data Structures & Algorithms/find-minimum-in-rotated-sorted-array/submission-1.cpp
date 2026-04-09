class Solution {
public:
    int findMin(vector<int> &nums) {
      int firstIndex = 0;
      int lastIndex = nums.size() - 1;  
      
      while(firstIndex < lastIndex)
      {
            int mid = firstIndex + (lastIndex - firstIndex) / 2 ;
            
            if(nums[mid] > nums[lastIndex])
            {
                firstIndex = mid + 1;
            }
            else
            {
                lastIndex = mid;
            }
      }

    return nums[firstIndex];
    }
};
