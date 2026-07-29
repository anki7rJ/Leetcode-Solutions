class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int firstMax = 0 ;
        int secondMax = 0;
        int n= nums.size();
        for(int i=0 ;i<n ;i++){
            if(nums[i]>firstMax){
                secondMax= firstMax;
                firstMax=nums[i];

            }
            else if(nums[i]>secondMax){
                secondMax = nums[i];
            }
        }
        int result = (firstMax-1)*(secondMax-1);
        return result;
       
        
    }
};