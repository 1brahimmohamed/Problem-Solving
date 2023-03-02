class MyQueue {

    Stack<Integer> mainStack;
    Stack<Integer> auxStack;

    public MyQueue() {
        mainStack = new Stack<Integer>();
        auxStack = new Stack<Integer>();
    }
    
    public void push(int x) {
            int poped = mainStack.pop();
            auxStack.add(poped);
        }

        mainStack.add(x);

            int poped = auxStack.pop();
            mainStack.add(poped);
        }
    }
    
    public int pop() {
        return mainStack.pop();

    }
    
    public int peek() {
        return mainStack.peek();
    }
    
    public boolean empty() {
        return mainStack.empty();
    }
}

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue obj = new MyQueue();
 * obj.push(x);
 * int param_2 = obj.pop();
 * int param_3 = obj.peek();
 * boolean param_4 = obj.empty();
 */
