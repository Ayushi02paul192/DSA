class Solution {
public:
    void solve(string ip,string op,vector<string>& ans)
    {
        if(ip.length()==0)
        {
            ans.push_back(op);
            return;
        }
        string op1=op;
        string op2=op;
        if(isdigit(ip[0])==0)
       {
            op1.push_back(tolower(ip[0]));
            op2.push_back(toupper(ip[0]));
             ip.erase(ip.begin()+0);
        solve(ip,op1,ans);
        solve(ip,op2,ans);
        }
        else
        {
            // op1.push_back(ip[0]);
            op2.push_back(ip[0]);
             ip.erase(ip.begin()+0);
        //solve(ip,op1,ans);
        solve(ip,op2,ans);
        }
       
        return;
    }
    vector<string> letterCasePermutation(string s) {
        vector<string> ans;
        string op="";
        solve(s,op,ans);
        return ans;
    }
};