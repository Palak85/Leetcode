class Solution {
public:
    int calPoints(vector<string>& ops) {
        stack<int> st;

        for(string op : ops) {
            if(op == "C") {
                st.pop();
            }
            else if(op == "D") {
                st.push(2 * st.top());
            }
            else if(op == "+") {
                int top1 = st.top(); st.pop();
                int top2 = st.top();
                st.push(top1); // restore
                st.push(top1 + top2);
            }
            else {
                st.push(stoi(op)); // number
            }
        }

        int sum = 0;
        while(!st.empty()) {
            sum += st.top();
            st.pop();
        }

        return sum;
    }
};