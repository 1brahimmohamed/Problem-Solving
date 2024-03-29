class Solution {
public:
    bool isSubsequence(string s, string t) {
        if(s.length() > t.length())
            return false;
        
        if (s.length() == 0)
            return true;


        int idx = 0;
        
        for (int i = 0; i < t.length(); i++){
            if (s[idx] == t[i])
                idx++;

            if (s.length() == idx)
                return true;
        }

        return false;
    }
};392. Is Subsequence
