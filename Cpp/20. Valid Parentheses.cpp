class Solution {
public:
    bool isValid(string s) {
        stack<char> stack;

        for(int i=0; i < s.length(); i++){

            if(s[i] == '(' || s[i] == '[' || s[i] == '{')
                stack.push(s[i]);

            if(s[i] == ')' || s[i] == ']' || s[i] == '}'){
                if(stack.empty()){
                    return false;
                }

                char chTop = stack.top();
                stack.pop();

                if (s[i] == ')' && chTop != '(') 
                    return false;                    

                else if (s[i] == ']' && chTop != '[')
                    return false;                    

                else if (s[i] == '}' && chTop != '{') 
                    return false;                   
            }
        }

        return stack.empty();
    }
};

