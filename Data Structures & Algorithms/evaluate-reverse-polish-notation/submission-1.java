class Solution {
    public int evalRPN(String[] tokens) {
        Stack<Integer> stack = new Stack<>();
        for(String number : tokens)
        {
            
                if(number.equals("+"))
                {
                    int a = stack.pop();
                    int b = stack.pop();
                    stack.add(b + a);
                }
                else if(number.equals("-"))
                {
                    int a = stack.pop();
                    int b = stack.pop();
                    stack.add(b - a);
                }else if(number.equals("*"))
                {
                    int a = stack.pop();
                    int b = stack.pop();
                    stack.add(b * a);
                }else if(number.equals("/"))
                {
                    int a = stack.pop();
                    int b = stack.pop();
                    stack.add(b / a);
                }
                else
                {
                    stack.push(Integer.parseInt(number)); 
                }
            }
          return stack.pop();
    }
}
