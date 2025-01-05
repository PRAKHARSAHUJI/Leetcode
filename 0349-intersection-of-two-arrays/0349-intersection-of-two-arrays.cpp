class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int>set1;
        unordered_set<int>set2;
        unordered_set<int>set3;
        for (int i = 0; i < nums1.size(); i++) {
                set1.insert(nums1[i]);
        }
        for (int i = 0; i < nums2.size(); i++) {
                set2.insert(nums2[i]);
        }

        for (auto num1:set1) 
        {
            for (auto num2:set2) 
            {
                if(num1==num2)
                set3.insert(num1);
            }
                
        }
        return vector<int>(set3.begin(),set3.end());
        // vector<int>(result.begin(), result.end())
    }
};