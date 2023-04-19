//
// Created by Ibrahim on 1/11/2023.
//

#include <vector>
#include <math.h>

using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min = pow(10,5);
        int maxP = 0;

        for(int x: prices){
            if(x < min)
                min = x;

            if (maxP < (x-min))
                maxP = x - min;
        }

        return maxP;
    }
};