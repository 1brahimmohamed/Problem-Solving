class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        int left_sum = 0;
        int right_sum = 0;
        for (int i=1; i<nums.size(); ++i)   right_sum += nums[i];

        for (int i=0; i<nums.size(); i++) {
            if (left_sum == right_sum)  return i;
            left_sum += nums[i];
            if (i < nums.size()-1)  right_sum -= nums[i+1];
        }

        return -1;
    }
};
