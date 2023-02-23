class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        map<char, int> hashMap;

        for(int i = 0; i < magazine.length(); i++){
            char letter = magazine[i];
            cout<<letter<<endl;
            hashMap[letter]++;
        }

        for(int i = 0; i < ransomNote.length(); i++){
            char letter = ransomNote[i];
            cout<<letter<<endl;

            if(hashMap[letter] <= 0){
                cout<<"Not Found : "<<letter<<endl;
                return false;
            }
            hashMap[letter]--;
        }
        
        return true;
    }
};
