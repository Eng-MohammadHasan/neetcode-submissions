class Solution {
    public boolean hasDuplicate(int[] nums) {
                HashSet<Integer> number = new HashSet<>();
        for(int i = 0 ; i < nums.length ; i++)
        {
          number.add(nums[i]);
        }
        
        if(number.size() != nums.length)
        {
          return true;
        }
        else {
          return false;
        }
    }
}