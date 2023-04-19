//
// Created by Ibrahim on 1/11/2023.
//

#include <vector>
using namespace std;

class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        
        if (mat.empty() || r * c != mat.size() * mat[0].size())
            return mat;

        vector<vector<int>> res(r, vector<int>(c));

        int ro = 0;
        int co = 0;

        for (vector<int> row : mat)
            for (int num : row) {
                res[ro][co++] = num;
                if(co == c){
                    ro++;
                    co = 0;
                }
            }

        return res;
    }
};