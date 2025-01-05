// class Solution {
// public:
//     int reverse(int x) {
        
//         string s = to_string(x);
//         string ans = "";
//         for(int i = s.length()-1; i >= 0; i--)
//         {
//             ans += s[i];
//         }
        
//         return stoi(ans);
//     }
// };


// class Solution {
// public:
//     int reverse(int x) {
//         string s = to_string(x);
//         string ans = "";
        
//         // Loop through the string starting from the last character
//         for (int i = s.length() - 1; i >= 0; i--) {
//             ans += s[i];
//         }
        // if(x<0)
        // cout<<"-";
//         // Handle the case where the number exceeds the integer limit after reversal
//         try {
//             return stoi(ans); // Convert back to integer
//         }
//         catch (const out_of_range&) {
//             return 0;  // Return 0 in case of overflow
//         }
//     }
// };



class Solution {
public:
    int reverse(int x) {
        string s = to_string(x);
        string ans = "";

        // Check if the number is negative
        bool negative = (x < 0);
        if (negative) {
            s = s.substr(1);  // Remove the negative sign for now
        }

        // Reverse the digits in the string
        for (int i = s.length() - 1; i >= 0; i--) {
            ans += s[i];  // Add characters in reverse order
        }

        // If the number was negative, append the negative sign back
        if (negative) {
            ans = "-" + ans;
        }

        // Handle the case where the reversed number exceeds the integer limit
        try {
            return stoi(ans);  // Convert reversed string to an integer
        }
        catch (const out_of_range&) {
            return 0;  // If overflow/underflow, return 0
        }
    }
};

