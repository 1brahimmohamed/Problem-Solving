class Solution {
    public int removeDuplicates(int[] nums) {
        Set<Integer> numberSet = new HashSet<>();
        int n = 0;
        for (int i = 0; i < nums.length; i++) {
            if (!numberSet.contains(nums[i])) {
                numberSet.add(nums[i]);
                nums[n++] = nums[i];
            }
        }
        return n;
    }
}
