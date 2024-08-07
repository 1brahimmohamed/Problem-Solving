class Solution {
public:
    int romanToInt(string s) {
    int integerNumber = 0;

    map<char,int> romainLetters;

    romainLetters.insert(pair<char,int>('I',1));
    romainLetters.insert(pair<char,int>('V',5));
    romainLetters.insert(pair<char,int>('X',10));
    romainLetters.insert(pair<char,int>('L',50));
    romainLetters.insert(pair<char,int>('C',100));
    romainLetters.insert(pair<char,int>('D',500));
    romainLetters.insert(pair<char,int>('M',1000));

    for (int i = 0; i < s.length(); ++i) {
        char rLetter = s[i];
        char rPlusOneLetter = s[i+1];
        
        if(romainLetters[rLetter] >= romainLetters[rPlusOneLetter])
            integerNumber += romainLetters[s[i]];
        else
            integerNumber -= romainLetters[s[i]];
    }
    
    return integerNumber;
    }
};
