class Solution {
    public boolean validPalindrome(String s) {
        int ptr_one = 0;
        int ptr_two = s.length() - 1;
        int counter_forgive_Try = 1;
        boolean res = true;

        while (ptr_one <= ptr_two) {
            if (s.charAt(ptr_one) != s.charAt(ptr_two) && counter_forgive_Try > 0) {
                return check(s, ptr_one + 1, ptr_two) || 
                       check(s, ptr_one, ptr_two - 1);
            } 
            else if (counter_forgive_Try == 0 && s.charAt(ptr_one) != s.charAt(ptr_two)) {
                res = false;
                break;
            }

            ptr_one++;
            ptr_two--;
        }

        return res;
    }

    public boolean check(String s, int ptr_one, int ptr_two) {
        while (ptr_one <= ptr_two) {
            if (s.charAt(ptr_one) != s.charAt(ptr_two)) {
                return false;
            }
            ptr_one++;
            ptr_two--;
        }
        return true;
    }
}