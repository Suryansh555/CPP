class Solution {
public:
    int rec(int pos, int amount, vector<vector<int>> &dp, vector<int> &coins){
        if(pos >= coins.size()){
            if(amount == 0) return 0;
            return INT_MAX / 2;
        }
        int &ret = dp[pos][amount];
        if(ret != -1) return ret;
        int res = INT_MAX / 2;
        for(int i=pos; i<coins.size(); i++){
            if(coins[i] <= amount){
                res = min(res, 1 + rec(pos + 1, amount - coins[i], dp, coins));
                res = min(res, 1 + rec(pos, amount - coins[i], dp, coins));
            }
            else{
                res = min(res, rec(pos + 1, amount, dp, coins));
            }
        }
        return ret = res;
        
    }
    int coinChange(vector<int>& coins, int amount) {
        vector<vector<int> > dp(coins.size() + 1, vector<int>(amount + 1, -1));
        int ans = rec(0, amount, dp, coins);
        return ans == INT_MAX / 2 ? -1 : ans;
    }
};