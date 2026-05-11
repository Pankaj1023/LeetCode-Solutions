class Solution {
public:

    bool solve(vector<int>& nums, int i, int target) {

        if(i==nums.size())
        return false;


        if(nums[i]==target)
        return true;

        return solve(vector<int>& nums,int target);

        boolinearsearch(vector<int>& nums,int target)

        return solve(nums,0,target);
    }
};