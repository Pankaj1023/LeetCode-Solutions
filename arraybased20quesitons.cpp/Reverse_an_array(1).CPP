class Solution {
public:
    void reverseArray(vector<int>& nums) {
        int start = 0;
        int end = nums.size() - 1;

        while (start < end) {
            swap(nums[start], nums[end]);
            start++;
            end--;
        }
    }
};



 //If Question is like LeetCode 344 (Reverse String)

 
class Solution {
public:
    void reverseString(vector<char>& s) {
        int i = 0, j = s.size() - 1;

        while (i < j) {
            swap(s[i], s[j]);
            i++;
            j--;
        }
    }
};