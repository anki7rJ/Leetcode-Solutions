class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        int num1=INT_MIN;
        int num2=INT_MIN;
        int num3=INT_MIN;
        int minnum1 = INT_MAX;
        int minnum2 = INT_MAX; 
        for(int i=0;i<nums.size(); i++){
            if(nums[i]>num1){
                num3=num2;
                num2=num1;
                num1=nums[i];
            }else if(nums[i]>num2){
                num3=num2;
                num2=nums[i];
            }else if(nums[i]>num3){
                num3=nums[i];
            }

            if (nums[i] < minnum1) {
                minnum2 = minnum1;
                minnum1 = nums[i];
            } else if (nums[i] < minnum2) {
                minnum2 = nums[i];
            }
        
        }
        long long prod1 = (long long)num1 * num2 * num3;
        long long prod2 = (long long)minnum1 * minnum2 * num1;

        return std::max(prod1, prod2);
        
        
    }
};