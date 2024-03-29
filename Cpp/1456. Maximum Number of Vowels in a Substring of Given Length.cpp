class Solution {
public:
    string vowels = 
aeiou;
    int maxVowels(string s, int k) {
        int count = 0;

        for (int i = 0; i < k; i++) {
            if (checkVowel(s[i]))
                count++;
        } 
        int answer = count;


        for (int i = k; i < s.length(); i++) {
            count += checkVowel(s[i]) - checkVowel(s[i-k]);
            answer = max(answer, count);
        }

        return answer;
    }

    int checkVowel(char myChar){
        if (vowels.find(myChar) != std::string::npos) return 1;
        else return 0;
    }
};
