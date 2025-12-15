class Solution {
private:
    void swap(int nums[], int i, int j) {
        int temp = nums[i];
        nums[i] = nums[j];
        nums[j] = temp;
    }

public:
    void selectionSort(int nums[], int n) {
        for(int count = 0; count < n - 1; count++) {
            int min_index = count; 
            
            for(int i = count + 1; i < n ; i++) {
                if(nums[i] < nums[min_index]) { 
                    min_index = i;
                }
            }
            
            if (min_index != count) {
                swap(nums, count, min_index);
            }
        }
    }
};