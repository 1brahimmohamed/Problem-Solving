class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int> map;

        for (char x: s){
            map[x]++;
        }

        for (char y: t){
            if(map[y] > 0){
                map[y]--;
            }
            else{
                return false;
            }
        }

        for(auto i : map){
            if(i.second > 0){
                return false;
            }
        }
        return true;
    }
};
