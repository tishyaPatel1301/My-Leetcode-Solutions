class Solution {
public:
    bool isPalindrome(int x) {
        int pal = x;
        long long sum = 0;

        if(x<0)
        {
            return false;
        }
        while(x != 0){
           
            sum = sum*10 + x%10;
            x/=10;

        }
        if(sum==pal)
        {
            return 1;
        }
        else
        {
            return 0;
        }

        
    }
};  