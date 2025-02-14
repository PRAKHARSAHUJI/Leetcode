class Solution {
public:
    int longestPalindrome(string s) {
        int arr[26] = {0};
        int brr[26] = {0};
        for(int i = 0; i < s.length(); i++){
            if(s[i] >= 97)
            arr[s[i] - 'a']++;
            else{
                brr[s[i] - 'A']++;
            }
        }
        int ans = 0;
        int oddLowerCase = 0;
        int oddUpperCase = 0;
        for(int i = 0; i < 26; i++){
            if(arr[i] % 2 == 0){
                ans += arr[i]; 
            }
            else
            {
                ans += arr[i] - 1;
                oddLowerCase = 1;
            }
            if(brr[i] % 2 == 0){
                ans += brr[i]; 
            }
            else
            {
                ans += brr[i] - 1;
                oddUpperCase = 1;
            }


        }
        return ans + max(oddUpperCase,oddLowerCase);
    }
};