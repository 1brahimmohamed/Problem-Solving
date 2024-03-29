class Solution {
public:
    void moveZeroes(vector<int>& nums) {

        vector<int> newArr;
        int zeroCount = 0;

        for(int x: nums){
            if(x != 0)
                newArr.push_back(x);
            else
                zeroCount++;
        }

        for(int i = 0; i < zeroCount; i++)
            newArr.push_back(0);


        nums = newArr;
    }
};
