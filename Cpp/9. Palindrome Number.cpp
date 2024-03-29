class Solution {
public:
    bool isPalindrome(int x) {
      if (x < 0)
            return false;
        int orignalX = x;
        long long reversedNum = 0;

        while (x != 0) {
            int digit = x % 10;
            reversedNum = reversedNum * 10 + digit;
            x /= 10;
        }

        return reversedNum == orignalX;  
    }
};
