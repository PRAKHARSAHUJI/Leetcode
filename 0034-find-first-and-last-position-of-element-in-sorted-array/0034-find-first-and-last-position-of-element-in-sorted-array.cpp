class Solution {
public:
    vector<int> searchRange(vector<int>& arr, int target) {
        int start = 0;
        int end = arr.size() - 1;
        int ans = -1;
        while(start <= end){
            int mid = start + (end - start) / 2;
            if(arr[mid] == target){
                ans = mid;
                break;
            }else if(arr[mid] < target){
                start = mid + 1;
            }else if(arr[mid] > target){
                end = mid - 1;
            }
        }
        if(ans == -1) return {-1, -1}; 
        vector<int>res;
        int left = 0;
        int right = 0;
        start = 0; end = ans;
        while(start <= end){
            int mid = start + (end - start) / 2;

            if(arr[mid] == target){
                left = mid;
                end = mid - 1;
            }else if (arr[mid] < target){
                start = mid + 1;
            }
        }
        res.push_back(left);
        start = ans; end = arr.size() - 1;
        while(start <= end){
            int mid = start + (end - start) / 2;

            if(arr[mid] == target){
                right = mid;
                start = mid + 1;
            }else if (arr[mid] > target){
                end = mid - 1;
            }
        }
        res.push_back(right);
        return res;
    }
};