class Solution {
public:
    int findGCD(vector<int>& nums) {
        int mini = *min_element(nums.begin(),nums.end());
        int maxi = *max_element(nums.begin(),nums.end());

        return findGCD(mini,maxi);
    }
}




//   🚀 METHOD 2 — Euclidean Algorithm ⭐ BEST
// 📌 Formula

// gcd(a,b)=gcd(b,amodb)

class Solution {
public:

    int gcd(int a, int b) {
        if(b==0)
        return 0;

        return gcd(b,a%b);
    }
};
