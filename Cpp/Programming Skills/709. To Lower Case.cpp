class Solution {
public:
    string toLowerCase(string s) {
        string newStr = ";

        for(char c: s){
            newStr.push_back(tolower(c));
        }

        return newStr;
    }
};
