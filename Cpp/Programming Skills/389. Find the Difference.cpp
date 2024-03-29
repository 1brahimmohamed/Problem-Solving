class Solution {
public:
    char findTheDifference(string s, string t) {
        unordered_map<char, int> myMap;

        for(char c: s){
            myMap[c]++;
        }

        for(char ch: t){
            myMap[ch]--;
        }

        for(const auto& elem : myMap){
            if (elem.second == -1)
                return elem.first;
        }

        return 'a';
    }
};
