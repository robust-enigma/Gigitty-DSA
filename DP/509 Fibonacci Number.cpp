//Kadak Maal Hai
class Solution {
public:
//Top Down (Memoization)
    // int solve(int n,vector<int>&dp)
    // {
    //     if(n<=1)
    //     return n;

    //     if(dp[n]!=-1)
    //     return dp[n];

    //     dp[n]=solve(n-1,dp)+solve(n-2,dp);

    //     return solve(n,dp);
        
    // }

    //Bottom Up

    // int solve(int n,vector<int>&dp)
    // {   
       
    //     dp[0]=0;
    //     dp[1]=1;

    //     for(int i=2;i<=n;i++)
    //     {
    //         dp[i]=dp[i-1]+dp[i-2];
    //     }

    //     return dp[n];
        
    // }

    //with constant time space
    int solve(int n,vector<int>&dp)
    {   
       
       int a=0;
       int b=1;
       int c;

        for(int i=1;i<n;i++)
        {
           c=a+b;
            a=b;
            b=c;
        }

        return c;
        
    }
    int fib(int n) {
        if(n==0) return 0;
        if(n==1) return 1;

        vector<int>dp(n+1,-1);

        return solve(n,dp);
    }
};
