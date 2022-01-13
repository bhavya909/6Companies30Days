vector<string> generate(int N)
{
	// Your code here
	vector<string> ans;
	string s="";
	for(int i=1;i<=N;i++)
	{
	    int num=i;
	    int r;
	    while(num)
	    {
	        int r=num%2;
	        s=to_string(r)+s;
	        num=num/2;
	    }
	    ans.push_back(s);
	    s="";
	}
	return ans;
}
