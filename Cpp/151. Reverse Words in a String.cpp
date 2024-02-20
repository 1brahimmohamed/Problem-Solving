class Solution {
public:
    string reverseWords(string s) {
        string input = s;
        istringstream iss(input);
        vector<std::string> words;

        string word;
        while (iss >> word) {
            words.push_back(word);
        }

        reverse(words.begin(), words.end());

        string str = words[0];
        for (int j = 1; j < words.size(); j++){
            str = str + " " + words[j];
        }

        return str;
    }
};