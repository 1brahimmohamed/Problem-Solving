class Solution {
    public String mergeAlternately(String word1, String word2) {
        
        int length = Math.min(word1.length(), word2.length());
        StringBuilder newStr = new StringBuilder();

        for (int i = 0; i < length; i++) {
            newStr.append(word1.charAt(i));
            newStr.append(word2.charAt(i));
        }

        if (word1.length() > word2.length()) {
            for (int i = length; i < word1.length(); i++) {
                newStr.append(word1.charAt(i));
            }
        } else if (word1.length() < word2.length()) {
            for (int i = length; i < word2.length(); i++) {
                newStr.append(word2.charAt(i));
            }
        }

        return newStr.toString();
    }
}
