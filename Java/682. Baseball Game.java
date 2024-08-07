class Solution {
    public int calPoints(String[] operations) {
        
        Stack<Integer> stack = new Stack<>();

        for(String str: operations){
            switch (str) {
                case "C":
                    stack.pop();
                    break;
                case "D":
                    stack.push(stack.peek() * 2);
                    break;
                case "+":
                    int last = stack.pop();
                    int before_last = stack.peek();
                    stack.push(last);
                    stack.push(last + before_last);
                    break;
                default:
                    stack.push(Integer.parseInt(str));
                    break;
            }
        }

        int sum = 0;
        while (!stack.empty()) {
            sum += stack.pop();
        }

        return sum;
    }
}
