import java.util.HashMap;

class Solution {
    public int[] twoSum(int[] nums, int target) {
        int n = nums.length;
        HashMap<Integer, Integer> position = new HashMap<>();

        for (int i = 0; i < n; i++) {
            int needed_nums = target - nums[i];
            if (position.containsKey(needed_nums)) {
                return new int[] { position.get(needed_nums), i };
            }
            position.put(nums[i], i);
        }

        return new int[] { -1, -1 }; 
    }
}