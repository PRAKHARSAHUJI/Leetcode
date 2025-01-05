class Solution {
public:
    bool isPalindrome(string s) {
        string new_s;
        string ans;
        for(int i = 0; i < s.length(); i++)
        {
            if((s[i] >= 65 && s[i]<= 90) || (s[i] >= 97 && s[i]<= 122) || (s[i] >= 48 && s[i]<= 57) )
            new_s += s[i];
        }
        transform(new_s.begin(), new_s.end(), new_s.begin(),::tolower);
        ans = new_s;
        reverse(ans.begin(),ans.end());
        cout<<new_s<<endl<<ans;
        
        if(ans==new_s)
        return true;
        


        
        return false;
    }
};