class Solution {
public:
	bool isPossible(int N, vector<pair<int, int> >& p) {
	    // Code here
	    vector<int> check(N,0);
for(pair<int,int> x:p)
check[x.first]++;
int changes = 1;
while(changes!=0){
changes = 0;
vector<int> removals;
for(int i=p.size()-1;i>-1;i--){
if(check[p[i].second]==0){
check[p[i].first]--;
changes++;
removals.push_back(i);
}
}
for(auto x:removals){
p.erase(p.begin()+x);
}
}
if(p.size()!=0)
return false;
return true;
	}
};
