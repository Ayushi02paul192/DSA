class Solution {
public:
    bool isSubsequence(string X, string Y) {
        int m=X.length(),n=Y.length();
       int L[m+1][n+1];

/* Following steps build L[m+1][n+1] in bottom up fashion. Note
	that L[i][j] contains length of LCS of X[0..i-1] and Y[0..j-1] */
for (int i=0; i<=m; i++)
{
	for (int j=0; j<=n; j++)
	{
	if (i == 0 || j == 0)
		L[i][j] = 0;
    }
}
        for (int i=1; i<=m; i++)
    {
	for (int j=1; j<=n; j++)
	{
        
	if (X[i-1] == Y[j-1])
		L[i][j] = L[i-1][j-1] + 1;
	else
		L[i][j] = max(L[i-1][j], L[i][j-1]);
	}
}
if(L[m][n]==m)
    return true;
        else
            return false;
        
    }
};