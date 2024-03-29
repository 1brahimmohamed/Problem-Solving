class Solution {
public:
    int search(vector<int>& nums, int target) {

        int start = 0;
        int end = nums.size() - 1;
        while (start <= end) {
            int half = (start + end) / 2;
            if (nums[half] == target) {
                return half;

            } else if (nums[half] < target) {
                start = half + 1;
            } else {
                end = half - 1;
            }
        }
        return -1;
    }
};
