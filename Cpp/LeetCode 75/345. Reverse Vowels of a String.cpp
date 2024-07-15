class Solution {
public:
    string reverseVowels(string s) {
        int start = 0;
        int end = s.length() - 1;
        std:set<char> vowels = {'a','e','i','o','u','A','E','I','O','U'};
        
        while (start < end) {
            while (start < end && !vowels.contains(s[start]) ) {
                start++;
            }
            
            while (start < end && !vowels.contains(s[end]) ) {
                end--;
            }
            
            swap(s[start], s[end]);
            
            start++;
            end--;
        }
        
        return s;
    }
};