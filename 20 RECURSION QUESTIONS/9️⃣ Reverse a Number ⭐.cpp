class Solution {
public:

    int helper(int n, int rev) {
        if(n==0)
        {
            return rev;
        }

        int digit = n%10;
         rev = rev*10 + digit;

         return helper(n/10 , rev)
    }
       int reverseNumber(int n) {
        return helper(n, 0);
    }
};