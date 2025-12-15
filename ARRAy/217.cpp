class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        // sort(nums.begin(),nums.end());
        // for(int i = 1; i < nums.size(); i++) {
        //     if(nums[i] == nums[i-1]) {
        //         return true;
        //     }
        // }
        // return false;
        unoredered_set<int> s;
        for(int num : nums) {
            if(s.count(num)) {
                return true;
            }
            else {
                s.insert(num);
            }
        }
        return false;
        
    }
};