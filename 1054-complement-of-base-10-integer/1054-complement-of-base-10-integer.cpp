class Solution {
public:
    int bitwiseComplement(int num) {

        if(num == 0)
        return 1;

        int ans = 0;
        int mul = 1;
        int rem = 0;
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
        
 