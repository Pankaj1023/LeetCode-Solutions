class Solution {
public:

    int solve(vector<int>& nums, int i) {

        // base case

        if(i==nums.size()-1)
        return nums[i];

        return max(nums[i],solve(nums,i+1))

    int finMaximum(vector<int>& nums)
    {
        return solve(nums,0);
    }
};