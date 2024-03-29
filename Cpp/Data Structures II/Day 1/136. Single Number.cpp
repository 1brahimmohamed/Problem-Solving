class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int,int> myMap;

        for(int n: nums){
            myMap[n]++;
        }

        for(auto el: myMap){
            if (el.second == 1)
                return el.first;
        }

        return 0;
    }
};
