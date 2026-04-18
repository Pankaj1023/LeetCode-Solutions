class Solution {
public:
    int arraySum(vector<int>& nums) {
        int sum = 0;
        for(int i=  0; i<nums.size();i++)
        {
            sum = sum+nums[i];
            
        }
        return sum;

    }
};


// Appraoch number 2  using STL::
class Solution {
public:
    int arraySum(vector<int>& nums) {
        return accumulate(nums.begin(),nums.end(),0);

    }
};
