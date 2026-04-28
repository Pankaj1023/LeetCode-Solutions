class Solution {
public:
    int countSubstrings(string s, int k) {
        int n = s.length();
        
        if(k>n)
        {
            return 0;
        }
        return n-k+1;
    }

    }