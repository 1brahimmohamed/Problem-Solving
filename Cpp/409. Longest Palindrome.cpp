class Solution {
public:
    int longestPalindrome(string s) {
        unordered_set<int> set;
        int counter = 0;

        for(char c: s){
            if(set.find(c) != set.end()){
                counter += 2;
                set.erase(c);
            }
            else
                set.insert(c);
        }

        if(set.size() > 0){
            counter++;
        }

        return counter;
    }
};
