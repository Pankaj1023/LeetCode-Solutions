class Solution {
public:
    int firstUniqChar(string s) {
        int n = s.length();

        for(int i = 0; i < n; i++) {
            int count = 0;

            // poori string vich check karo
            for(int j = 0; j < n; j++) {
                if(s[i] == s[j]) {
                    count++;
                }
            }

            // je sirf 1 vaar aaya
            if(count == 1) {
                return i;
            }
        }

        return -1;
    }
};