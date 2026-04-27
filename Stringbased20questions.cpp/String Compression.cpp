class Solution {
public:
    string compressString(string s) {
        string result = "";
        int n = s.length();

        for(int i = 0; i < n; i++) {
            int count = 1;

            // count same characters
            while(i < n - 1 && s[i] == s[i + 1]) {
                count++;
                i++;
            }

            result += s[i];                 // character
            result += to_string(count);     // count
        }

        return result;
    }
};