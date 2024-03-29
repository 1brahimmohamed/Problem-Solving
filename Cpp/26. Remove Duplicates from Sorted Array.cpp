class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        std::set<int> numberSet;
        int n = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (numberSet.find(nums[i]) == numberSet.end()) {
                numberSet.insert(nums[i]);
                nums[n++] = nums[i];
            }
        }
        return n;
    }
};
