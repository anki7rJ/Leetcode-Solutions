class Solution {
public:
    string stoneGameIII(vector<int>& stoneValue) {
        int n  = stoneValue.size();
        vector<int> dp(4,0);

        for(int i = n-1;i>= 0;--i){
            int maxAdv =INT_MIN ;
            int currentSum = 0;

            for(int k = 1;k <=3 &&i+k <=n;++k) {
                currentSum +=stoneValue[i+k-1];
                int opponentAdv =dp[(i+k) % 4];
                maxAdv = max(maxAdv ,currentSum  - opponentAdv);
            }

            dp[i % 4] =maxAdv ;
        }

        int aliceAdv =dp[0] ;

        if(aliceAdv > 0)  return "Alice" ;
        if(aliceAdv <0) return "Bob" ;
        return "Tie" ;
        
        
    }
};