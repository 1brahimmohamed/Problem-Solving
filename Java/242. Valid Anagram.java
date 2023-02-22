class Solution {
    public boolean isAnagram(String s, String t) {

        HashMap<Character,Integer> map = new HashMap<Character,Integer>();

        for(int i = 0; i < s.length(); i++){
            char ci = s.charAt(i);
            if(map.containsKey(ci)){
                int value = map.get(ci);
                value++;
                map.put(ci, value);
            }
            else{
                map.put(ci, 1);
            }
        }

        System.out.println(map);
        for(int j = 0; j < t.length(); j++){
            char cj = t.charAt(j);
            if(map.containsKey(cj)){
                int value = map.get(cj);
                value--;
                map.put(cj, value);
            }
            else{
                return false;
            }
        }

        for (Map.Entry m : map.entrySet()){
            if((int)m.getValue() >= 1)
                return false;
        }
        
        return true;
    }
}
