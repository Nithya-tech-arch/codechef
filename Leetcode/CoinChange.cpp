class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        int n=coins.size();
        int dp[amount+1];
        dp[0]=0;
        for(int i=1;i<=amount;i++){
            dp[i]=INT_MAX;
            
        }
        
        for(int i=1;i<=amount;i++){
            for(int j=0;j<n;j++){
                if(coins[j]<=i){
                int sub=dp[i-coins[j]];
                if(sub!=INT_MAX && sub+1 < dp[i])
                    dp[i]=sub+1;
                }
                }
        }
        
    
    if(dp[amount]==INT_MAX) 
        return -1;
    else 
        return dp[amount];
    }
    };
