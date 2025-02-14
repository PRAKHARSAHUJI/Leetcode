class Solution {
public:
    string sortSentence(string s) {
        string arr[10];
        int index = 0;
        for (int i = 0; i < s.length(); i++) {
            string ans = "";
            if (s[i] - '0' > 0 && s[i] - '0' <= 9) {
                for (int j = index; j < i; j++) {
                    ans += s[j];
                }
                arr[s[i] - '0'] = ans;
                index = i + 2;
            }
        }
        string res = "";
        for (int i = 1; i <= 9; i++) {
            if (!arr[i].empty()) {
                res += arr[i];
                res += " ";
            }
        }
        if (!res.empty()) {
            res.pop_back();
        }

        return res;
    }
};
