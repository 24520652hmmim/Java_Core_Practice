class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        set<vector<int>>res;
        int n = nums.size();
        for(int k = 0; k < n ; k++) {
            int target = -nums[k];
            int left = k + 1;
            int right = n - 1;
            while(left < right) {
                int sum = nums[left] + nums[right];
                if(sum == target) {
                    res.insert({nums[k] , nums[left], nums[right]});
                    left++;
                    right--;
                }
                if(sum < target) left++;
                else right--;
            }
        }
        return vector<vector<int>>(res.begin(),res.end());
        
    }
};