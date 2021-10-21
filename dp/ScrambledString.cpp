unordered_map<string,int> mp;
int solve(string a,string b)
{
    if(a.compare(b)==0)
    return 1;
    if(a.length()<=1)
    return 0;
    string key;
    key=a+" "+b;
    if(mp.find(key)!=mp.end())
    return mp[key];
    int n=a.length();
    int flag=0;
    for(int i=1;i<=n-1;i++)
    {
        if((solve(a.substr(0,i),b.substr(n-i,i))==1 && solve(a.substr(i,n-i),b.substr(0,n-i))==1)|| 
        (solve(a.substr(0,i),b.substr(0,i))==1 && solve(a.substr(i,n-i),b.substr(i,n-i))==1))
        {flag=1;break;}
    }
    return mp[key]=flag;
}
int Solution::isScramble(const string a, const string b) {
    if(a.length()!=b.length())
    return 0;
    if(a.length()==0 && b.length()==0)
    return 1;
    return solve(a,b);
}
