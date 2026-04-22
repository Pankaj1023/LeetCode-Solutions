class Solution {
public:
    int countOccurrences(vector<int>& nums, int x) {
        int count = 0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==x)
            {
                count++;
            }
        }
        return count;

    }
}