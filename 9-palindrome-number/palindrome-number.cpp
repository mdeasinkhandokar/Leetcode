class Solution {
public:
    bool isPalindrome(long long x) {
       if(x<0){
        return false;
       }
       long rev =0;
      long tmp=x;
       
       while (tmp!=0){
        rev= rev*10+tmp%10;
        tmp/=10;
       }
       return rev ==x;
        
    }

};