/*
// ----------------------- APPROACH 4 ---------------------


// class Solution {
// public:
//     int mySqrt(int x) {
//         return sqrt(x);
//     }
// };

*/

/*
// ----------------------- APPROACH 3 ---------------------

// class Solution {
// public:
//     int mySqrt(int x) {
//         for(long long i = 1; i*i <= x; i++)
//         {
//             if(i*i == x)
//             return i;
//         }
//     return int(sqrt(x));
//     }
// };

*/

// ----------------------- APPROACH 2 ---------------------

// class Solution {
// public:
//     int mySqrt(int x) {
//         if(x == 0 || x == 1) return x;
//         int start = 1;
//         int end = x / 2;
//         int ans = 0;
//         while(start <= end){
//             int mid = start + (end - start) / 2;
//             if(mid == (x / mid)){
//                 return mid;
//             }else if(mid > (x / mid)){
//                 end = mid - 1;
//             }else{
//                 ans = mid;
//                 start = mid + 1;
//             }
//         }
//         return ans;
//     }
// };

class Solution {
public:
    int mySqrt(int x) {
        if (x == 0 || x == 1) return x; 
        
        int start = 1, end = x / 2, ans = 0;
        
        while (start <= end) {
            int mid = start + (end - start) / 2;

            if (mid <= x / mid) { 
                ans = mid; 
                start = mid + 1; 
            } else {
                end = mid - 1;
            }
        }
        return ans;
    }
};
/*

// ----------------------- APPROACH 1 ---------------------

class Solution {
public:
    int mySqrt(int x) {
        for(int i = 1; i*i <= x; i++)
        {
            if (i >= 46340)  
                break;
            if(i*i == x)
            return i;
        }
    return int(sqrt(x));
    }
};

*/