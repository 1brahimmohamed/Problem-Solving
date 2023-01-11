//
// Created by Ibrahim on 1/11/2023.
//
#include <vector>
#include <unordered_map>

using namespace std;

class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int, int> map;
        vector<int> res;

        for(int x: nums1){
            map[x]++;
        }

        for(int y: nums2){
            if(map[y] >= 1){
                res.push_back(y);
                map[y]--;
            }
        }

        return res;
    }
};