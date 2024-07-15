class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {

        unordered_map<int, int> map;
        std::set<int> mySet;

        for(int x: arr){
            map[x]++;
        }


        for(auto x: map){
            if (mySet.find(x.second) != mySet.end()) {
               return false;
            }
            mySet.insert(x.second);
        }

        return true;
    }
};