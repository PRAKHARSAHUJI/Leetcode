class Solution {
public:
    string addStrings(string n1, string n2) {
        string res = "";
        int carry = 0;
        int val = 0;
        int val2 = 0;

        int s1 = n1.length();
        int s2 = n2.length();


        if(s1 <= s2)
        {
            string temp = n1;
            n1 = n2;
            n2 = temp;
        }
        
        int index1 = n1.length() - 1;
        int index2 = n2.length() - 1;
        while(index2 >= 0)
        {

        val = n1[index1] - '0' + n2[index2] - '0' + carry;
        carry = val / 10;
        res.push_back((val) % 10 + '0');

        index2--;
        index1--;
        }

        while(index1 >= 0){
            val2 = n1[index1] - '0'+ carry;
            carry = val2 / 10;
            res.push_back((val2) % 10 + '0');
            index1--;
            
        }
        if(carry > 0){
            res.push_back(carry + '0');
        }

        reverse(res.begin(),res.end()); 
        return res;
    }
};
