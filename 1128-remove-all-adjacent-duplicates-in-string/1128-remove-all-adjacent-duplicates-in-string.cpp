class Solution {
public:
    string removeDuplicates(string s) {
        stack<char> st;
        st.push(s[0]);
        for(int i =1 ; i<s.length();i++)
        {
            if(!st.empty() && st.top()==s[i])
            st.pop();
            else
            st.push(s[i]);
        }
        string ans = "";
        while(st.size()!=0)
        {
            ans+=st.top();
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};