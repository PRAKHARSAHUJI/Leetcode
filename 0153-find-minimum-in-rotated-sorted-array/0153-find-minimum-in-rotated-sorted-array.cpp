class Solution {
public:
    int findMin(vector<int>& a) {
        int n = a.size();
        int start = 0; 
        int end = n - 1;
        int ans = a[0];
        if(n == 1) return a[0];
        while(start <= end){
            int mid = start + (end - start) / 2;
            if(a[0] <= a[mid]){
                start = mid + 1;
            }else if(a[0] > a[mid]){
                ans = a[mid];
                end = mid - 1;
            }
        }
        return ans;
    }
};