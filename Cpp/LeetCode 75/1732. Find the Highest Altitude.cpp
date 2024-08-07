class Solution {
    public int largestAltitude(int[] gain) {
        int maxAtit = 0;
        int currentAtit = 0;

        for (int i = 0; i < gain.length; i++){
            currentAtit += gain[i];

            if (currentAtit > maxAtit)
                maxAtit = currentAtit;
        }

        return maxAtit;
    }
}
