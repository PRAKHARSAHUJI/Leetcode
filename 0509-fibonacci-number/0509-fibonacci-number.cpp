// class Solution {
// public:
//     int fib(int n) {
//         if(n <= 1) return n;
//         return fib(n-1) + fib(n-2);
//     }
// };

// ----------------------------------------------


// class Solution {
// public:
//     int fib(int n) {
//         if(n <= 1) return n;
//         vector<int>dp(n+1, -1);
//         dp[0] = 0;
//         dp[1] = 1;
//         for(int i = 2; i <= n; i++){
//             dp[i] = dp[i-1] + dp[i-2];
//         }
//         return dp[n];
//     }
// };


// ----------------------------------------------


class Solution {
public:
    int ans(int n, vector<int>& dp)
    {
        if(n <= 1) return n;
        if(dp[n] == -1){
            dp[n] = ans(n-1,dp) + ans(n-2,dp);
            return dp[n];
        }
        return dp[n];
    }
    int fib(int n) {
        vector<int>dp(n+1,-1);
        return ans(n,dp);
    }
};