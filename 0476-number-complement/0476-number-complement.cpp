// class Solution {
// public:
//     int findComplement(int num) {

//         int ans = 0;
//         int mul = 1;
//         int rem = 0;
//         while(num != 0)
//         {
//             rem = num % 2;
//             rem = rem ^ 1;
//             ans = rem * mul + ans;
//             num /= 2;
//             mul *= 10;

//         }
//         int result = 0;
//         mul = 1;
//         while(ans != 0)
//         {
//             result += (ans % 2 ) * mul;
//             mul *= 2;
//             ans = ans / 10;
//         }

//         return result;
//     }
// };



class Solution {
public:
    int findComplement(int num) {

        if(num == 0)
        return 1;

        long long ans = 0;
        long long mul = 1;
        long long rem = 0;
        while(num != 0)
        {
            rem = num % 2;
            rem = rem ^ 1;
            ans = rem * mul + ans;
            num /= 2;
            mul *= 2;

        }
        

        return ans;
    }
};