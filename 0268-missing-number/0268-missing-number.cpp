// class Solution {
// public:
//     int missingNumber(vector<int>& nums) {
//         int n = nums.size();
//         int sum = (n * (n+1))/2;
//         int tot_sum = 0;
//         for(int i = 0; i < n; i++)
//         {
//             tot_sum += nums[i];
//         }
        
//         return sum - tot_sum;
//     }
// };


class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int sum = (n * (n+1))/2;
        int tot_sum = 0;
        for(int i = 0; i < n; i++)
        {
            tot_sum += nums[i];
        }
        
        int ans = sum - tot_sum;
        return ans;
    }
};





