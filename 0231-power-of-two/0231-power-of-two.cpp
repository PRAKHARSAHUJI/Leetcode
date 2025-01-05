class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n==1)
        return true;
        if(n<1 || n%2 != 0)
        return false;
        else
        {
            while(n%2==0)
            {
                n/=2;
            }
            if(n==1)
                return true;
            return false;
        }
    }
};
