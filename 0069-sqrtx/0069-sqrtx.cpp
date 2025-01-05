// class Solution {
// public:
//     int mySqrt(int x) {
//         return sqrt(x);
//     }
// };

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