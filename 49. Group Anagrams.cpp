class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<string,vector<string>> mp;
        vector<vector<string>> res;
        int n=strs.size();
        for(int i=0;i<n;i++)
        {
            string str=strs[i];
            sort(strs[i].begin(),strs[i].end());
            mp[strs[i]].push_back(str);
        }
        
        for(auto x:mp)
        {
            res.push_back(x.second);
        }
        return res;
    }
};
