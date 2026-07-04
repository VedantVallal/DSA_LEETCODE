class Solution {
public:
    bool isPalindrome(int x) {
        int n=0;
        int x2=x;
        while(x>0){
            if(n>INT_MAX/10 || n<INT_MIN/10) return false;
            n=n*10+(x%10);
            x=x/10;
        }
        if(n==x2) return true;
        else return false;
    }
};