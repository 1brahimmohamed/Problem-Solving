class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> v(nums.size(), 0);
        int s = 0;
        int e = nums.size() - 1;
        int last = e;

        while(s <= e){
            if( abs(nums[s]) <= abs(nums[e]) ){
                v[last--] = nums[e] * nums[e];
                e--;
            }
            else{
                v[last--] = nums[s] * nums[s];
                s++;
            }
        }
        return v;
    }
};
