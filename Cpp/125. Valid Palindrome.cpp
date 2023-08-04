/**
 * @param {string} s
 * @return {boolean}
 */

const isAlphaNumeric = (char) => {
    return char.match(/^[0-9a-z]+$/i) !== null;
};

var isPalindrome = function(s) {
    if (s.length === 0)
        return "Empty s is a palindrome";

    let left = 0;
    let right = s.length - 1;

    
    while (left < right) {
        while (left < right && !isAlphaNumeric(s[left])) {
            left++;
        }
        while (left < right && !isAlphaNumeric(s[right])) {
            right--;
        }
        if (s[left].toLowerCase() !== s[right].toLowerCase()) {
            return false;
        }
        left++;
        right--;
    }
    return true;
};