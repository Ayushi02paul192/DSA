 int m=s.length(),n=p.length();
        bool t[m+1][n+1];
        memset(t,0,sizeof(t));
        t[0][0] = 1;
        for(int i = 1; i <= n; i ++) 
            t[0][i] = p[i - 1] == '*' && t[0][i - 1];
            for(int i=1;i<=m;i++)
            {
                for(int j=1;j<=n;j++)
                {
                    if(p[j-1]!='*')
                    {
                        if(p[j-1]=='?'|| p[j-1]==s[i-1])
                            t[i][j]=t[i-1][j-1];
                    }
                    else
                        t[i][j]=t[i][j-1]||t[i-1][j];
                }
            }
        return t[m][n];
    }