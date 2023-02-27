class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int majorityThreshold = nums.size()/2;
        unordered_map<int, int> map;

        for(int x: nums){
            map[x]++;
        }

        int majorityElement = 0;

        for(int y: nums){
            int val = map[y];
            if(val > majorityThreshold){
                majorityElement = y;
            }
        }

        return majorityElement; 
    }
};
