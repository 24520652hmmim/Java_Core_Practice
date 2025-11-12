package HashMap;

import java.util.HashMap;

public class Solution {
    public int[] twoSum(int[] nums, int target) {
        int n = nums.length;
        HashMap<Integer, Integer> position = new HashMap<>();

        for (int i = 0; i < n; i++) {
            int needed_number = target - nums[i];
            if (position.containsKey(needed_number)) {
                return new int[] { position.get(needed_number), i };
            }
            position.put(nums[i], i);
        }

        return new int[] { -1, -1 };
    }
}
