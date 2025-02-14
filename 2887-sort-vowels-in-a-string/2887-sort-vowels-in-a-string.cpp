class Solution {
public:
    string sortVowels(string s) {
        int n = s.length();
        char arr[n];
        for (int i = 0; i < n; i++) {
            arr[i] = '.'; 
        }
        vector <char> ans; 
        for (int i = 0; i < n; i++) {
            if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' ||
                s[i] == 'u' || s[i] == 'A' || s[i] == 'E' || s[i] == 'I' ||
                s[i] == 'O' || s[i] == 'U')
            {
                ans.push_back(s[i]);
            }
            else{
                arr[i] = s[i];
            }
        }
        sort(ans.rbegin(), ans.rend());

        for(int i = 0; i < n; i++){
            if(arr[i] == '.'){
                char ch = ans.back();  
                ans.pop_back(); 
                arr[i] = ch;
            }
        }
        string res = "";
        for(int i = 0; i < n; i++){
            res += arr[i];
        }
        return res;
    }
};


// class Solution {
// public:
//     string sortVowels(string s) {
//         int n = s.length();  
//         char* arr = new char[n];  
//         vector<char> ans;  
        
//         for (int i = 0; i < n; i++) {
//             if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' ||
//                 s[i] == 'u' || s[i] == 'A' || s[i] == 'E' || s[i] == 'I' ||
//                 s[i] == 'O' || s[i] == 'U')
//             {
//                 ans.push_back(s[i]);  
//             } else {
//                 arr[i] = s[i];  
//             }
//         }
        
        
//         sort(ans.begin(), ans.end());

//         string res = "";  
//         int vowelIndex = 0;  

//         for (int i = 0; i < n; i++) {
//             if (arr[i] != s[i]) { 
//                 arr[i] = ans[vowelIndex]; 
//                 vowelIndex++;
//             }
//         }

//         for (int i = 0; i < n; i++) {
//             res += arr[i];
//         }

//         delete[] arr;
//         return res;
//     }
// };
