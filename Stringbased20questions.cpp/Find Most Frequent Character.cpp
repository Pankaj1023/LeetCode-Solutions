class Solution {
public:
    char mostFrequent(string s) {
        cin>>s;
        string result;
        int n =s.length();
        int maxcount=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(s[i]==s[j])
                {
                    count++;
                }

            }
        }
        if(count>maxcount)
        {
            maxcount = count;
            result = s[i];
        }
        

    }
    return result;
}