class Solution {
public:
    // int findMaxConsecutiveOnes(vector<int>& arr) {
    //     int n = arr.size();
    //     int ans = 0;
    //     int res = 0;
    //     for(int i = 0; i < n; i++){
    //         while(arr[i] == 1){
    //             ans++;
    //             i++;
    //             res = max(res,ans);
    //         }
    //         if(arr[i] == 0){
    //             ans = 0;
    //         }
    //     }
    //     return res;
    // }

    int findMaxConsecutiveOnes(vector<int>& arr) {
        int n = arr.size();
        int ans = 0;
        int res = 0;
        for(int i = 0; i < n; i++) {
            if(arr[i] == 1) {
                ans++;
                res = max(res, ans);
            } else {
                ans = 0;
            }
        }
        return res;
    }
};