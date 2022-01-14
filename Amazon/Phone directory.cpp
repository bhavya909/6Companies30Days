class Solution{
public:
    vector<vector<string>> displayContacts(int n, string t[], string s)
    {
        int k=s.size();
        vector<set<string>>ans(k);
        vector<vector<string>>res(k);
        for(int i=0;i<n;i++){
            int f=t[i].size();
            for(int j=0;j<min(f,k);j++){
                if(s[j]==t[i][j])ans[j].insert(t[i]);
                else break;
            }
        }
        string z="0";
        for(int i=0;i<k;i++){
            if(ans[i].size()>0){
                for(auto j:ans[i])res[i].push_back(j);
            }
            else res[i].push_back(z);
        }
        return res;
    }
};
