#include <stack>
using namespace std;

class Solution {
public:
    bool isValid(string s) {
        stack<char> st;

        for(char ch : s) {
            // Opening brackets
            if(ch == '(' || ch == '[' || ch == '{') {
                st.push(ch);
            }
            else {
                // Closing bracket but stack is empty
                if(st.empty())
                    return false;

                char top = st.top();
                st.pop();

                // Check matching pairs
                if((ch == ')' && top != '(') ||
                   (ch == ']' && top != '[') ||
                   (ch == '}' && top != '{')) {
                    return false;
                }
            }
        }

        // Stack should be empty for valid string
        return st.empty();
    }
};
