class Solution {
public:
    int minPartitions(string n) {
        
        int max = INT_MIN;
        for(int i=0; i< n.length(); i++){
            if(max < n[i]-'0') 
                max = n[i]-'0';
        }
        return max;
    }
};
