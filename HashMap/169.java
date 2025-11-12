package java.util.HashMap;

import java.util.HashMap;

class Solution {
    public int majorityElement(int [] nums) {
        int n = nums.length;
        HashMap<Integer,Integer> count = new HashMap<>();
        for(int num : nums) {
            count.put(num, count.getOrDefault(num,0) + 1);
        }

        for(int num : nums) {
            if(count.get(num) > n/2 ) {
                return num;
            }
        }
        return -1;
    }
}