class Solution {
public:
    int peakIndexInMountainArray(vector<int>& v) {
        int n = v.size();
        int start = 1;
        int end = n - 1;

        while(start <= end){
            int mid = start + (end - start) / 2;
            
            if((v[mid] > v[mid - 1]) && (v[mid] > v[mid + 1])){
                return mid;
            }else if( (v[mid] > v[mid - 1]) && (v[mid] < v[mid + 1])){
                start = mid + 1;
            }else if( (v[mid] < v[mid - 1]) && (v[mid] > v[mid + 1])){
                end = mid - 1;
            }
        }
        return 0;
    }
};