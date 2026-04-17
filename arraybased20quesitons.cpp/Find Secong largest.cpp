class Solution {
public:
    int secondLargest(vector<int>& nums){
        int largest = INT_MIN;
        int second = INT_MIN;

        for(int i = 0;i<nums.size();i++)
        {
            if(nums[i]>largest)
            {
                nums[i]=largest;
                second = largest;
            }
            else if (nums[i]>second && nums[i]!=largest)
            {
                second=nums[i];

                /* code */
            }
            
        }
        return second;



    }
}