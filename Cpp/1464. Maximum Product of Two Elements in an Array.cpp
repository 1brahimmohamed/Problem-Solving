class Solution {
public:
    int maxProduct(vector<int>& nums) {
    int max_product = 0;
    int n = nums.size();

    for (int first = 0; first < n; ++first) {
        for (int second = first + 1; second < n; ++second) {
            max_product = std::max(max_product,
                (nums[first] - 1) * (nums[second] - 1));
        }
    }

    return max_product;
    }
};
