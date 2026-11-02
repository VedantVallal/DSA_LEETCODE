class Solution {
public:
    string frequencySort(string s) {
       string ans;
       unordered_map<char,int>freq;
       for(auto ch:s){
        freq[ch]++;
       }
       vector<pair<char,int>>v;
       for(auto it:freq){
        v.push_back({it.first,it.second});
       }

       sort(v.begin(),v.end(),[](auto &a,auto &b){
        return a.second>b.second;
       });

       for(auto it:v){
        ans.append(it.second,it.first);
       }
       return ans;
    }
};