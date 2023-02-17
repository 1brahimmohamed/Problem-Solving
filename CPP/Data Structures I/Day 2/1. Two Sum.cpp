//
// Created by Ibrahim on 1/7/2023.
//
#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        unordered_map<int,int> map;

        for(int i = 0; i < nums.size(); i++){
            if(map.find(target - nums[i]) != map.end())
                return {i, map[target-nums[i]]};

            map[nums[i]] = i;
        }
        return {};
    }
};