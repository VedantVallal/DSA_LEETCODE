class Solution {
public:

    unordered_map<char,char>mp;
    char find_value(char ch){
        for(auto it:mp){
            if(it.second==ch)return it.first;
        }
        return ' ';
    }
    bool isIsomorphic(string s, string t) {
       
        for(int i=0;i<s.length();i++){
            auto it=mp.find(s[i]);
            char it1=find_value(t[i]);

            if(it==mp.end() && it1==' '){
                mp[s[i]]=t[i];
            }else{
                if(it!=mp.end()){

                if(it->second != t[i]) return false;
                }

                if(it1 != s[i]) return false;
            }
        }
        return true;
    }
};