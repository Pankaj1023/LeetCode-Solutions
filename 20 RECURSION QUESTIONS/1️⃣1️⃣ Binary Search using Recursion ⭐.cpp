class Solution {
public:
    
    int search(vector<int>& nums, int target) {
        
        return binarySearch(nums, 0, nums.size() - 1, target);
    }

    int binarySearch(vector<int>& nums, int low, int high, int target) {

        // Base Case
        if(low > high)
            return -1;

        int mid = (low + high) / 2;

        // Element found
        if(nums[mid] == target)
            return mid;

        // Search left side
        else if(target < nums[mid])
            return binarySearch(nums, low, mid - 1, target);

        // Search right side
        else
            return binarySearch(nums, mid + 1, high, target);
    }
};