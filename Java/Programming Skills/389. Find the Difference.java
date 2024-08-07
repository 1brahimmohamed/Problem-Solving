class Solution {
    public char findTheDifference(String s, String t) {
        Map<Character, Integer> myMap = new HashMap<>();

        for(char c: s.toCharArray()) {
            myMap.put(c, myMap.getOrDefault(c, 0) + 1);
        }

        for(char ch: t.toCharArray()) {
            myMap.put(ch, myMap.getOrDefault(ch, 0) - 1);
        }

        for(Map.Entry<Character, Integer> entry : myMap.entrySet()) {
            if (entry.getValue() == -1) {
                return entry.getKey();
            }
        }

        return 'a'; 
    }
}
