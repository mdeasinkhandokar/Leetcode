class Solution {
public:
    string convertToTitle(int n) {
       string  result ="";
    
        while (n){
          
            int digit=(n-1)%26;
            char letter ='A'+ digit;
            result= letter +result;
             n = (n-1)/26;

        }

        return result;
        
    }
};