class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        
        int curr;
        vector<bool> res (candies.size() , true);
        for(int i =0; i < candies.size(); i++){
            curr = candies[i]  + extraCandies;

            for(int j = 0; j < candies.size(); j++){
                if (j == i)
                    continue;
                
                if(candies[j] > curr)
                {
                    res[i] = false;
                }
            }
        }

        return res;
    }
};