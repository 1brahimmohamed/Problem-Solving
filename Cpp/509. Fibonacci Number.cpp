class Solution {
public:
    int fib(int n) {
        int previouspreviousNumber, previousNumber = 0, currentNumber = 1;
        
        if (n==0)
            return previousNumber;

        for(int i = 1; i < n; i++){
            previouspreviousNumber = previousNumber;
            previousNumber = currentNumber;
            currentNumber = previouspreviousNumber + previousNumber;
        }

        return currentNumber;
    }
};
