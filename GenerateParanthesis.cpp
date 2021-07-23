void solve(int open,int close,string op,vector<string>& ans)
{
    if(open==0 && close==0)
    {
        ans.push_back(op);
        return;
    }
    if(open!=0)
    {
        string op1=op;
        op1.push_back('(');
       solve(open-1,close,op1,ans);
    }
    if(open<close)
    {
        string op2=op;
        op2.push_back(')');
        solve(open,close-1,op2,ans);
    }
    return;
}
vector<string> Solution::generateParenthesis(int A) {
    int open=A;
    int close=A;
    vector<string> ans;
    string op="";
    solve(open,close,op,ans);
    return ans;
}
