class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int i=0,j=1;
        int prof=0;

        while(j<prices.size()){
            if(prices[i]>prices[j]){
                i=j;
            }else{
                prof=max(prof,prices[j]-prices[i]);
                j++;
            }
        }
        return prof;

    }
};