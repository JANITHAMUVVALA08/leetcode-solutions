class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        for (char c : s) {
            // Push the expected closing bracket onto the stack
            if (c == '(') st.push(')');
            else if (c == '{') st.push('}');
            else if (c == '[') st.push(']');
            // If it's a closing bracket, check if it matches the stack top
            else {
                if (st.empty() || st.top() != c) return false;
                st.pop();
            }
        }
        return st.empty();
    }
};
