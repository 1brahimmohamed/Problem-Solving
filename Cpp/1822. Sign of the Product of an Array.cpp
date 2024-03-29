class Solution {
public:
    int arraySign(vector<int>& nums) {
        int dec = 1;
        int intDes = 1;
        for (int x: nums){
            intDes = signFunc(x);

            if(intDes == 0){
                dec = 0;
                break;
            }

            dec *= intDes;
        }

        return dec;
    }

    int signFunc(int val){
        return val = (val >= 0)? ((val == 0)? 0 : 1) : -1;
    }
};
