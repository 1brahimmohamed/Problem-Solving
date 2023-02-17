//
// Created by Ibrahim on 1/6/2023.
//
#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int max(int a, int b) {
        return (a > b) ? a : b;
    }

    int max(int a, int b, int c) {
        return max(max(a, b), c);
    }

    int maxCrossingSum(vector<int>& arr, int l, int m, int r){

        int sum = 0;
        int left_sum = INT_MIN;

        for (int i = m; i >= l; i--) {
            sum = sum + arr[i];
            if (sum > left_sum)
                left_sum = sum;
        }

        sum = 0;
        int right_sum = INT_MIN;
        for (int i = m; i <= r; i++) {
            sum = sum + arr[i];
            if (sum > right_sum)
                right_sum = sum;
        }

        return max(left_sum + right_sum - arr[m], left_sum, right_sum);
    }

    int maxSubArraySum(vector<int>& arr, int l, int r){

        if (l > r)
            return INT_MIN;

        if (l == r)
            return arr[l];

        int m = (l + r) / 2;

        return max(maxSubArraySum(arr, l, m - 1),
                   maxSubArraySum(arr, m + 1, r),
                   maxCrossingSum(arr, l, m, r));
    }

    int maxSubArray(vector<int>& nums) {
        int max_sum = maxSubArraySum(nums, 0, nums.size() - 1);
        return max_sum;
    }
};