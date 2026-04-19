class Solution {
public:
    pair<int, int> countEvenOdd(vector<int>& nums) {
        int even = 0, odd = 0;

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] % 2 == 0)
                even++;
            else
                odd++;
        }

        return {even, odd};
    }
};