class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        
        if(s2.length() < s1.length()){
            return false;
        }

        int k = s1.length();

        sort(s1.begin(), s1.end());


        for(int i =0; i < s2.length() - s1.length() + 1; i++){
            string subStr;
            
            for(int j = 0; j < k; j++)
                subStr.push_back(s2[i+j]);

            sort(subStr.begin(), subStr.end());

            if (s1 == subStr)
                return true;
            
        }

        return false;
    }
};
