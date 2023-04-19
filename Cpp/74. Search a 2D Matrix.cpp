class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row = detectRow(matrix, target);
        if(row == -1) return false;
        else{
            for(int i = 0; i < matrix[0].size(); i++){
                if (matrix[row][i] == target)
                    return true;
            }
            return false;
        }
    }

    int detectRow(vector<vector<int>>& matrix ,int target){
        int size = matrix[0].size() - 1;
    
        for(int i = 0; i < matrix.size(); i++){
            if(target <= matrix[i][size])
                return i;
        }
        return -1;
    }
};
