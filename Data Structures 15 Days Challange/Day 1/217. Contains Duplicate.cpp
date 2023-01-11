//
// Created by I1bra on 1/6/2023.
//

#include <vector>
#include <unordered_map>

class Solution {
public:
    bool containsDuplicate(std::vector<int>& nums) {
        std::unordered_map<int, int> map;

        for (int i = 0; i < nums.size(); i++){
            map[nums[i]]++;
        }

        for (int j = 0; j < nums.size(); j++){
            if (map[nums[j]] >= 2)
                return true;
        }

        return false;
    }
};