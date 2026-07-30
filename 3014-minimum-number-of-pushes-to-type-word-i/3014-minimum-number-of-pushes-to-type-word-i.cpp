class Solution {
public:
    int minimumPushes(string word) {
        int length = word.size();
        int count = 0;
       if(length<=8) count = length;
       else if(length<=16) count = 8+(length-8)*2;
       else if(length<=24) count = 24+(length-16)*3;
       else count = 48+(length-24)*4;
       return count;
         

        
        
        
    }
};