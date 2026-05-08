class Solution {
public:
    
    void reverseArray(vector<int>& nums) {

        int i = 0;
        int j = nums.size() - 1;

        while(i < j) {

            swap(nums[i], nums[j]);

            i++;
            j--;
        }
    }
};