void reverseStack(stack<int> &st) {
    if(st.empty()) return;
    int x=st.top();
    st.pop();
    reverseStack(st);
    stack<int> st1;
    while(!st.empty())
    {
        st1.push(st.top());
        st.pop();
    }
    st1.push(x);
    while(!st1.empty())
    {
        st.push(st1.top());
        st1.pop();
    }
}