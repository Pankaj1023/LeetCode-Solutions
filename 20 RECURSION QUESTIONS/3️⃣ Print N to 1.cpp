class Solution {
public:
    void printReverse(int n) {
       for (int i=n;i>=1;i--)
       {
        cout<<i<<"\n";    
       }
    }
}




///  Approach 2 (Recursion – Important )

class Solution {
public:
    void printReverse(int n) {
        if (n==0)
        {
            return n;
        }
         cout<<n;
         printReverse(n-1);
    }
}

        
      
       
       