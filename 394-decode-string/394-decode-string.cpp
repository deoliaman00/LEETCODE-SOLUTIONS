class Solution {
public:
    string decodeString(string s) {
           stack<string> str_stk;
        stack<int> num_stk;
        string cus = "";
        int n = 0;
        for (auto ch : s) {
            if (isdigit(ch))
                n = n * 10 + (ch - '0');
            else if (ch == '[') {
                str_stk.push(cus);
                cus = "";
                num_stk.push(n);
                n = 0;
            } else if (isalpha(ch)) {
                cus += ch;
            } else { // ']'
                string s_top = str_stk.top();
                int n_top = num_stk.top();
                while (n_top--)
                    s_top += cus;
                cus = s_top;
                str_stk.pop();
                num_stk.pop();
            }
        }
        return cus;
    }
};