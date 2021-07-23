#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll mod=1000000007;

void solve(string ip,string op)
{
    if(ip.length()==0)
    {
        cout<<op<<"\n";
        return;
    }
    string op1=op;
    string op2=op;
    op1.push_back(ip[0]);
    op2.push_back(toupper(ip[0]));
    ip.erase(ip.begin()+0);
    solve(ip,op1);
    solve(ip,op2);
    return;
    
}
int main()
{
 #ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);    
    cout.tie(NULL);  
    ll t=1;
    //cin>>t;
    
    while(t--)
    {
        string ip;
        string op="";
        cin>>ip;
     solve(ip,op);
     
    }
    return 0;
}