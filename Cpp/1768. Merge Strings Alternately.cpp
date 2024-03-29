class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        
        int length = min(word1.length(), word2.length());

        string newStr;

        for (int i =0; i < length; i++){
            newStr.push_back(word1[i]);
            newStr.push_back(word2[i]);
        }

        if (word1.length() > word2.length()){
            for(int i = length; i < word1.length(); i++){
                newStr.push_back(word1[i]);
            }
        }

        else if (word1.length() < word2.length()){
            for(int i = length; i < word2.length(); i++){
                newStr.push_back(word2[i]);
            }
        }

        return newStr;
    }
};
