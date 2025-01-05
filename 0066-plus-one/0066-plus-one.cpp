class Solution {
public:
    // vector<int> plusOne(vector<int>& digits) {

    //         string s = "";

    //         for(int i = 0; i < digits.size(); i++)
    //         {
    //             s += to_string(digits[i]);
    //         }
    //         try {
    //         long long num = stoll(s);  // Convert string to long long
            
    //         // If no exception, add 1
    //         num = num + 1;
            
    //         s = to_string(num);  // Convert the updated number back to a string
    //         vector<int> v;
    //         for (int i = 0; i < s.length(); i++) {
    //             v.push_back(s[i] - '0');  // Convert character to integer
    //         }
            
    //         return v;
    //     }
    //     catch (const out_of_range& e) {
    //         // If an overflow exception is thrown, handle it using the manual approach
    //         int n = digits.size();
            
    //         // Start adding 1 from the last digit
    //         for (int i = n - 1; i >= 0; i--) {
    //             if (digits[i] < 9) {
    //                 digits[i]++;  // If the digit is less than 9, just add 1 to it
    //                 return digits;
    //             }
    //             digits[i] = 0;  // If it's 9, make it 0 and continue to the next left digit
    //         }
            
    //         // If we're here, all digits were 9 and we need an extra 1 at the front
    //         digits.insert(digits.begin(), 1);
            
    //         return digits;
    //     }

    // }



    vector<int> plusOne(vector<int>& digits) {
        int n = digits.size();
        
        // Start adding 1 from the last digit
        for (int i = n - 1; i >= 0; i--) {
            if (digits[i] < 9) {
                digits[i]++;  // If the digit is less than 9, just add 1 to it
                return digits;
            }
            digits[i] = 0;  // If it's 9, set it to 0 and continue to the next left digit
        }
        
        // If all digits were 9, add a leading 1
        digits.insert(digits.begin(), 1);
        
        return digits;
    }
};