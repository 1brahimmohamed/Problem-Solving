class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        unordered_map <int,int> mapX;
        unordered_map <int,int> mapY;

        vector<vector<int>> answer(2);

        for (int x: nums1){
            mapX[x]++;
        }

        for (int y: nums2){
            mapY[y]++;
        }

        vector<int> distinct1;

        for(int x: nums1){
            if(mapY[x] == 0){
                distinct1.push_back(x);
                mapY[x]++;
            }
        }

        vector<int> distinct2;
        for(int y: nums2){
            if(mapX[y] == 0){
                distinct2.push_back(y);
                mapX[y]++;
            }
        }

        answer[0] = distinct1;
        answer[1] = distinct2;

        return answer;
    }
};
