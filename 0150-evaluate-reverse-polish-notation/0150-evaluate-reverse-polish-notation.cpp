class Solution {
public:
    int evalRPN(vector<string>& v) {
        
        stack<int>st;
        for(int i = 0 ; i<v.size();i++)
        {
            // if(v[i]!=42 || v[i]!=43 || v[i]!=45 || v[i]!=47)
            if(v[i]!="+" && v[i]!="-" && v[i]!="*" && v[i]!="/")
            {
                st.push(stoi(v[i]));
            }
            else
            {
                int a = st.top();
                st.pop();
                int b = st.top();
                st.pop();
                if(v[i]=="+")
                {
                    st.push(a+b);
                }
                else if(v[i]=="-")
                {
                    st.push(b-a);
                }
                else if(v[i]=="*")
                {
                    st.push(a*b);
                }
                
                else if(v[i]=="/")
                {
                    st.push(b/a);
                }

            }
        }
        return st.top();
        
    }

};