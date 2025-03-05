class Solution {
public:
    int findPeakElement(vector<int>& a) {
         int n = a.size();
        int start = 0;
        int end= n - 1;
        if(n == 1) return 0;
        while(start <= end){
            int mid = start + (end - start) / 2;
            
            if(mid > 0 && mid < a.size() - 1 ){
                if((a[mid] > a[mid] - 1) && (a[mid] < a[mid + 1])){
                    start = mid + 1;
                }
                else if ((a[mid] < a[mid - 1]) && (a[mid] > a[mid + 1])) {
                    end = mid - 1;
                }else if ((a[mid] > a[mid - 1]) && (a[mid] > a[mid + 1])) {
                return mid;
                }
            }
            else if (mid == 0) {
                return (a[mid] > a[mid + 1]) ? mid : mid + 1;
            } 
            else if (mid == n - 1) {
                return (a[mid] > a[mid - 1]) ? mid : mid - 1;
            }
        }
        return 0;
    }
};