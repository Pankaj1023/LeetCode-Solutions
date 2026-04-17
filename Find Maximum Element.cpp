class Solution {
public:
    int findMax(vector<int>& nums) {
        return *max_element(nums.begin(), nums.end());
    }
};