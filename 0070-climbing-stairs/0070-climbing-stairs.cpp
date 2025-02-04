// ------------------------------------------
// Incorrect
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
// Correct Code
// TOP - DOWN

// class Solution {
// public:
//     int count(int n, vector<int>&dp){
//         if(n <= 1) return 1;
//         if(dp[n] != -1){
//             return dp[n];
//         }
//         return dp[n] = count(n-1,dp) + count(n-2,dp);
//     }
//     int climbStairs(int n) {
//         vector<int>dp(n+1,-1);
//         return count(n,dp);
//     }
// };


// ------------------------------------------
// Correct Code
// O(1) SPACE

class Solution {
public:
    
    int climbStairs(int n) {
        int curr,next = 1,next2 = 0;
        for(int i = n-1; i >= 0; i--){
            curr = next + next2;
            next2 = next; 
            next = curr;
        }
        return next;

    }
};