class Solution {
public:
    int reverse(int x) {
       int n=0;
       long long t=0; 
        int d=1;
        while(x!=0)
        {
            d=x%10;
            if(t*10>INT_MAX || t*10<INT_MIN) return 0;
            n=n*10+d;
            t=n;
            x=x/10;
        }

        
        return n;
    }
};