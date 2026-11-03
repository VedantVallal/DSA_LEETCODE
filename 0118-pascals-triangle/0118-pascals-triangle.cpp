class Solution {
public:
    vector<vector<int>> generate(int n) {
        vector<vector<int>> ans;
        vector<int> prev;

        for (int i = 0; i < n; i++) {
            vector<int> curr;
            curr.push_back(1);
            for (int j = 0; j +1 < prev.size(); j++) {
                curr.push_back(prev[j]+prev[j+1]);
            }
            if(i!=0){
            curr.push_back(1);
            }
            prev=curr;
            ans.push_back(curr);

        }
        return ans;
    }
};