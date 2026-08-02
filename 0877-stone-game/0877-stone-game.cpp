class Solution {
public:
    int solve(int i ,int j, vector<int>& piles){
        if(i<j){
            return 0;
        }
        if(i==j){
            return piles[i];
        }
        int take_i= piles[i]+ min(solve(i+2,j,piles),solve(i+1, j-1, piles));
        int take_j= piles[j]+ min(solve(i,j-2,piles),solve(i+1,j-1,piles));
        return max(take_i,take_j);
    }
    bool stoneGame(vector<int>& piles) {
        int n =piles.size();
        int total_score = accumulate(piles.begin(),piles.end(),0);
        int alice = solve(0,n-1,piles);
        int bob = total_score-alice;
        if(alice>bob){
            return false;
        }
        return true;
        
    }
};