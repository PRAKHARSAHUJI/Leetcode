// ------------------------------------------
// TLE at n = 44

// class Solution {
// public:
//     int climbStairs(int n) {
//         if(n==0) return 1;
//         if(n==1) return 1;
//         return climbStairs(n-1) + climbStairs(n-2);
//     }
// };

// ------------------------------------------

class Solution {
public:
    int count(int n, vector<int>&dp){
        if(n <= 1) return 1;
        if(dp[n] != -1){
            return dp[n];
        }
        return dp[n] = count(n-1,dp) + count(n-2,dp);
    }
    int climbStairs(int n) {
        vector<int>dp(n+1,-1);
        return count(n,dp);
    }
};