class Solution {
public:

    std::string getLastWord(const std::string& str) {
        std::istringstream iss(str);
        std::string lastWord;
        
        while (iss >> lastWord) {
            // Keep reading words until the last word is reached
        }
        
        return lastWord;
    }

    int lengthOfLastWord(string s) {
        return  getLastWord(s).length();
    }

    
};
