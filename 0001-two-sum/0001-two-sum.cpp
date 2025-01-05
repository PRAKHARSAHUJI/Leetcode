class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        for(int i =0 ; i<nums.size();i++)
        {
            // if(nums[i]+nums[i+1]==target)
            // return i,i+1;
            for(int j =i+1 ; j<nums.size();j++)
            {
                if(nums[i]+nums[j]==target)
                return {i,j};
            }
        }
return {};
    }
};