class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        int potential = nums[0], cnt =1;
        for(int i=0;i<n;i++)
        {
            if(cnt==0)
            {
                cnt++;
                potential=nums[i];
                
            }else if(nums[i]==potential)
            {
                cnt++;
            }
            else{
                cnt--;
            }
        }
        return potential;

        
    }
};