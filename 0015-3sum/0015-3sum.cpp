class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        
        int n=nums.size();
        vector<vector<int>>ans;
        int l,r,sum;
        sort(nums.begin(),nums.end());
        for(int i=0;i<n-2;i++){
            l=i+1;
            r=n-1;
            if(i>0 && nums[i]==nums[i-1])continue;

            
            while(l<r){
                sum=nums[l]+nums[r];
                          if (i > 0 && nums[i] == nums[i - 1])
                continue;
                if(sum == -nums[i]){
                    ans.push_back({nums[i],nums[l],nums[r]});
                    l++;
                    r--;

                     // Skip duplicates
                    while (l < r && nums[l] == nums[l - 1])
                        l++;

                    while (l < r && nums[r] == nums[r + 1])
                        r--;



                }else if(sum > -nums[i]){
                    r--;
                }else{
                    l++;
                }
            }
        }

        return ans;
    }
};