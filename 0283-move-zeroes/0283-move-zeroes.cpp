// class Solution {
// public:
//     void moveZeroes(vector<int>& nums) {
        
//         for(int i = 0; i < nums.size(); i++){
//             if(nums[i] == 0){
//             for(int j = i+1; j < nums.size(); j++){
//                 if(nums[j] != 0){
//                     nums[i] = nums[j];
//                     nums[j] = 0;
//                     break;
//                 }
//             }
//             }
//         }
//     }
// };

// ---------   METHOD 2 -------------

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int j = -1;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] == 0){
                j = i;
                break;
            }
            }
        if(j == -1) return;
        for(int i = j+1; i < nums.size(); i++){
            if(nums[i] != 0){
                swap(nums[i], nums[j]);
                j++;
            }
        }

    }

};