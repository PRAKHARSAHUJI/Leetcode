class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int low = 0;
        int high = nums.size() - 1;
        bool flag = true;
        int index = 0;
        int index2 = 0;
        int mid;
        while(low <= high){
            mid = (low + high) / 2;
            if(nums[mid] == target){
                flag = false;
                return mid;
            }
            else if(nums[mid] > target){
                high = mid - 1;
                index = mid;
            }
            else{
                low = mid + 1;
                index2 = mid;
            }

            // if(mid == 0)
            // return 0;
            // else if((nums[index]>target) && (nums[index - 1] < target) )
            // return index;
            // else if(mid == nums.size()-1)
            // return nums.size();
            // else if((nums[index2]<target) && (nums[index2 + 1] > target) )
            // return index2;
        }
        // return index2;
        return low;
    }
};