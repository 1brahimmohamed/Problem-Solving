class Solution {
public:
    bool repeatedSubstringPattern(string s) {

       int n = s.length();
        for (int len = 1; len <= n / 2; len++) {
            if (n % len == 0) {
                bool repeat = true;
                std::string substr = s.substr(0, len);
                for (int i = len; i < n; i += len) {
                    if (s.substr(i, len) != substr) {
                        repeat = false;
                        break;
                    }
                }
                if (repeat) return true;
            }
        }
        
        return false;
    }
};
