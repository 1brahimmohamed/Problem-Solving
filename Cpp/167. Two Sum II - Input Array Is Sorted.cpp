class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        unordered_map<int, tuple<int, int>> map;
        vector<int> indeces(2,0);

        for(int i = 0; i < numbers.size(); i++){

            auto& tub = map[numbers[i]];

            if(get<0>(tub)){
                return {get<1>(tub) + 1 , i + 1} ;
            }
            
            else{
                auto& myTuple = map[target - numbers[i]];
                get<0>(myTuple)++;
                get<1>(myTuple) = i;
            }
        }
    
    return {-1,-1};
    }
};
