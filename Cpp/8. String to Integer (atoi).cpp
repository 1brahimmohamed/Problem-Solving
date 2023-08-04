class Solution {
public:
    int myAtoi(string str) {
        
    int i = 0;
    int sign = 1;
    int result = 0;

    while (i < str.length() && str[i] == ' ') {
        i++;
    }

    if (i < str.length() && (str[i] == '+' || str[i] == '-')) {
        sign = (str[i] == '-') ? -1 : 1;
        i++;
    }

    while (i < str.length() && std::isdigit(str[i])) {
        int digit = str[i] - '0';

        if (result > INT_MAX / 10 || (result == INT_MAX / 10 && digit > 7)) {
            return (sign == 1) ? INT_MAX : INT_MIN;
        }

        result = result * 10 + digit;
        i++;
    }

    return result * sign;
    }
};