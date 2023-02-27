class Solution {
public:
    int firstUniqChar(string s) {

        unordered_map<char, int> map;
        
        for(char c: s){
            cout << c;
            map[c]++;
        }
        
        char letter = '0';
        int leastIndex = s.length()-1;
        for (auto i : map)
        {   

            if(i.second == 1){
                int index = s.find(i.first);
                if(index <= leastIndex){
                    leastIndex = index;
                    letter =  i.first;
                }
            } 
        }

        if(letter == '0')
            return -1;
        else{
            return leastIndex;
        }
    }
};
