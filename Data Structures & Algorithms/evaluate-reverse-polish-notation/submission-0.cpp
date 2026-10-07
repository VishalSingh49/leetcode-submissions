class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        // it's very simple it can be solve by using stack ...

        stack<int> st;
        
        for(int i = 0;i<tokens.size();i++){
            if(tokens[i] == "+"){
                int b = st.top();
                st.pop();
                b=st.top()+b;
                st.pop();
                st.push(b);
            }
            else if(tokens[i] == "*"){
                int b = st.top();
                st.pop();
                b=st.top()*b;
                st.pop();
                st.push(b);
            }
            else if(tokens[i] ==  "-"){
                int b = st.top();
                st.pop();
                b = st.top() - b;
                st.pop();
                st.push(b);
            }
            else if(tokens[i] == "/"){
                int b = st.top();
                st.pop();
                b=st.top()/b;
                st.pop();
                st.push(b);
            }
            else{
                int a = stoi(tokens[i]);
                st.push(a);

            }
            
        }

        return st.top();

    }
};