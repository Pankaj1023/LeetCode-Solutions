class Solution {
public:
    void printNumbers(int n) {
        for(int i=0;i<=n;i++)
        {
            cout<<i<<"\n";
        }
    }
}


//    Approach 2 (Recursion – Important )


class Solution {
public:
    void printNumbers(int n) {
        if(n==0) return n;

        printNumbers(n-1);
        cout<<n<<" ";
    }
};