class Solution {
public:
    int minimumOperations(vector<int>& v) {
        int countdiv =0;
        for(int i = 0 ;i<v.size();i++)
        {
            if(v[i]%3==0)
            {
                countdiv+=0;
            }
            else if((v[i]-1)%3==0)
            {
                countdiv+=1;
            }
            else if((v[i]+1)%3==0)
            {
                 countdiv+=1;
            }
           
        }
        return countdiv;
    }
};