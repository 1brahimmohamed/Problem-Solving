class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        int i=INT_MAX;
        int j=INT_MAX;
        
        for(auto x: nums){
            if(x<=i)
                i=x;
            else if(x<=j)   
                j=x;
            else        
                return true;   
        }
        return false;
    }
};