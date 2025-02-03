// NORMAL

// class Solution {
// public:
//     int fib(int n) {
//         if(n <= 1) return n;
//         return fib(n-1) + fib(n-2);
//     }
// };

// ----------------------------------------------

// DP BOTTOM UP

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

// TOP DOWN

// class Solution {
// public:
//     int ans(int n, vector<int>& dp)
//     {
//         if(n <= 1) return n;
//         if(dp[n] == -1){
//             dp[n] = ans(n-1,dp) + ans(n-2,dp);
//             return dp[n];
//         }
//         return dp[n];
//     }
//     int fib(int n) {
//         vector<int>dp(n+1,-1);
//         return ans(n,dp);
//     }
// };


// ----------------------------------------------

// SPACE OPTIMIZE

class Solution {
public:
    
    int fib(int n) {
        if(n <= 1) return n;
        int prev2 = 0;
        int prev1 = 1;
        int curr = 0;
        for(int i = 2; i <= n; i++){
            curr = prev2 + prev1;
            prev2 = prev1;
            prev1 = curr;

        }
        return curr;

    }
};