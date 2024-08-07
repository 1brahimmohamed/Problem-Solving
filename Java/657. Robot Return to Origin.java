class Solution {
    public boolean judgeCircle(String moves) {
        int [] pos = {0, 0};

        for (char c: moves.toCharArray()){
            switch (c) {
                case 'U':
                    pos[0] += 1;
                    break;
                case 'D':
                    pos[0] -= 1;
                    break;
                case 'R':
                    pos[1] += 1;
                    break;
                case 'L':
                    pos[1] -= 1;
                    break;
            }
        }

        if (pos[0] == 0 && pos[1] == 0)
            return true;
        
        return false;
    }
}
