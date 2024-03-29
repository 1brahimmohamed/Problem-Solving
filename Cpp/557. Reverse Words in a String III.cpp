class Solution {
public:
    string reverseWords(string s) {

        int l = 0;
        int r;
        char temp;
        int whiteSpacePos = s.find(' ', 0);

        while(true){
            r = whiteSpacePos - 1;
            while(l < r){
                temp = s[r];
                s[r--] = s[l];
                s[l++] = temp;
            }

            l = ++whiteSpacePos;
            whiteSpacePos = s.find(' ', whiteSpacePos);

            if(whiteSpacePos == string::npos){
                r = s.size() - 1;

                while(l < r){
                    temp = s[r];
                    s[r--] = s[l];
                    s[l++] = temp;
                }

                break;
            }
                
        }

        return s;
    }
};
