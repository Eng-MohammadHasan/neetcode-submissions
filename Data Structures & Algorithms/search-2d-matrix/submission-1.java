class Solution {
    public boolean searchMatrix(int[][] matrix, int target) {
        int left;
        int right;
        int numberOfRows = 0;
        int mid;

        left = 0;
        right = matrix[numberOfRows].length - 1;

        while(numberOfRows < matrix.length)
        {
            mid = (left + right) / 2;

            if(matrix[numberOfRows][mid] == target)
            {
                return true;
            }
            //right
            else if(target > matrix[numberOfRows][mid])
            {
                left = mid + 1;
            }  
            //left
            else
            {
                right = mid - 1;
            }

            if(left > right)
            {
                numberOfRows++;
                if(numberOfRows < matrix.length)
                {
                    left = 0;
                    right = matrix[numberOfRows].length - 1;
                }
            }
        }
        return false;
    }
}
