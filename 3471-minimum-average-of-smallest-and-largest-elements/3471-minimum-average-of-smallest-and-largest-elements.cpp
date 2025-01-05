// class Solution {
// public:
//     double minimumAverage(vector<int>& v) {
//         while(v.size()<=0)
        
//         {
//             vector <double> res;
        
//         int countmn = INT_MAX;
//         int countmx =INT_MIN;
        
//         for(int i =0;i<v.size()-1;i++)
//         {
//             if(v[i]<v[i+1])
//                 countmn = min(countmn,v[i]);
//             if(v[i]>v[i+1])
//                 countmx= max(countmx,v[i]);
//         }
//         v.push_back((countmx+countmn)/v.size());
            
//         }
        
//     }
// };


// class Solution {
// public:
//     double minimumAverage(vector<int>& nums) {
//         vector<double> averages;
        
//         sort(nums.begin(), nums.end());
        
//         int left = 0;
//         int right = nums.size() - 1;
        
//         while (left < right) {
//             double avg = (nums[left] + nums[right]) / 2.0;
//             averages.push_back(avg);
//             left++;
//             right--;
//         }
        
//         double minAverage = *min_element(averages.begin(), averages.end());
//         // stringstream stream;
//         // stream << fixed << setprecision(1) << minAverage;
//         // stream >> minAverage;
//          minAverage = round(minAverage * 10) / 10;
//         // stringstream stream;
//         // stream << fixed << setprecision(1) << minAverage;
//         // stream >> minAverage;
//         return minAverage;
//     }
// };




class Solution {
public:
    double minimumAverage(vector<int>& nums) {
        vector<double> averages;
        
        sort(nums.begin(), nums.end());
        
        int left = 0;
        int right = nums.size() - 1;
        
        while (left < right) {
            double avg = (nums[left] + nums[right]) / 2.0;
            averages.push_back(avg);
            left++;
            right--;
        }
        
        double minAverage = *min_element(averages.begin(), averages.end());
        
        //  minAverage = round(minAverage * 10) / 10;
      
        return minAverage;
    }
};