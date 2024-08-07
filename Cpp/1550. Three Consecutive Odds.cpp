class Solution {
public:

    bool checkIsEven(int x){
        if (x%2 == 0)
            return true;
        else
            return false;
    }

    bool threeConsecutiveOdds(vector<int>& arr) {
        int count = 0;

        for (int el: arr){
            if (checkIsEven(el)){
                count = 0;
            }
            else {
                count++;
            }

            if (count >= 3){
                return true;
            }
        }

        return false;
    }
};
