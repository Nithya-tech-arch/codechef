class Solution {
public:
    int longestPalindromeSubseq(string A) {
        int n = A.length();
    int dp[n][n];
    for(int i=0;i<n;i++){
        dp[i][i] = 1;
    }
    for(int i=0;i<n-1;i++){
        int ans =1;
        if(A[i]==A[i+1]) ans++;
        dp[i][i+1] = ans;
    }
    for(int len = 3; len<=n;len++){
        for(int i=0;i<=n-len;i++){
            if(A[i]==A[i+len-1]) dp[i][i+len-1] = dp[i+1][i+len-2] +2;
            else dp[i][i+len-1] = max(dp[i+1][i+len-1], dp[i][i+len-2]);
        }
    }
    return dp[0][n-1];  
    }
};
