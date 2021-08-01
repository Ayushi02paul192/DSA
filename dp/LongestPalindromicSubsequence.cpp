class Solution {
public:
    int longestPalindromeSubseq(string str1) {
        int m=str1.length();
        string str2=str1;
        int n=m;
        reverse(str2.begin(),str2.end());
         // int m=str1.length(),n=str2.length();
	    int t[m+1][n+1];
	    for(int i=0;i<=m;i++)
	    {
	        for(int j=0;j<=n;j++)
	        {
	            if(i==0 || j==0)
	            t[i][j]=0;
	        }
	    }
	    for(int i=1;i<=m;i++)
	    {
	        for(int j=1;j<=n;j++)
	        {
	            if(str1[i-1]==str2[j-1])
	            t[i][j]=1+t[i-1][j-1];
	            else
	            t[i][j]=max(t[i-1][j],t[i][j-1]);
	        }
	    }
	    return  t[m][n];
	}
    
};