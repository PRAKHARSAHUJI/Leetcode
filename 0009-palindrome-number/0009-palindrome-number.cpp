class Solution {
public:
    bool isPalindrome(int x) {
        string s = to_string(x);
        string res =  to_string(x);
        reverse(s.begin(),s.end());
        if(s==res)
        return 1;
        return 0;
        
    }
};