class Solution {
public:
    vector<int> pancakeSort(vector<int>& arr) {
        int n = arr.size();
        vector<int> result;
        int count = n - 1;
        while(count > 0) {
            int max_index = count;
            for(int i = 0; i < count; i++) {
                if(arr[i] > arr[max_index]) {
                    max_index = i;
                }
            }
            if(max_index != count) {
                if(max_index != 0) {
                    result.push_back(max_index + 1);
                    flip(arr, max_index + 1);
                }
                result.push_back(count + 1);
                flip(arr, count + 1);
            }
            count--;
        }
        return result;
    }

    void flip(vector<int>& nums, int k) {
        int left = 0;
        int right = k - 1;
        while(left < right) {
            swap(nums[left], nums[right]);
            left++;
            right--;
        }
    }
};
