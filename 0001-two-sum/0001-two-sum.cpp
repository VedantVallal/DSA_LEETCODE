class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int t) {
        vector<int>ans;
        int i=0,j=nums.size()-1;
        int sum=0;
        vector<int>org;
        org=nums;
        sort(nums.begin(),nums.end());
       
        while(i<j){
            sum=nums[i]+nums[j];
            if(sum>t)j--;
            else if(sum<t)i++;
            else{
                ans.push_back(nums[i]);
                ans.push_back(nums[j]);
                break;
            }
        }
        auto it1 = find(org.begin(),org.end(),ans[0]);
        int ind1=it1-org.begin();
        
        auto it2 = find(org.begin(),org.end(),ans[1]);
       int ind2=it2-org.begin();
        
        if(ind1==ind2){
            auto it3=find(it2+1,org.end(),ans[1]);
            int ind3=it3-org.begin();
            
        ans[0]=ind1;
        ans[1]=ind3;
        return ans;
        }
        ans[0]=ind1;
        ans[1]=ind2;
        return ans;
    }
};