#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll mod=1000000007;

int solve(int n)
{
    if(n==1)
    {return 1;}
    
    return n*solve(n-1);
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
     cout<<solve(6);
     
    }
}