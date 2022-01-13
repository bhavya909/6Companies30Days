class Solution
{
    public:
    //Function to find list of all words possible by pressing given numbers.
    string get(int i)
    {
        if(i==1) return "";
        if(i==2) return "abc";
        if(i==3) return "def";
        if(i==4) return "ghi";
        if(i==5) return "jkl";
        if(i==6) return "mno";
        if(i==7) return "pqrs";
        if(i==8) return "tuv";
        if(i==9) return "wxyz";
    }
    void func(int i,int a[],int N,string s,vector<string> &res)
    {
        if(i==N){
        res.push_back(s);
        return;
        }
        
        string str=get(a[i]);
        for(int j=0;j<str.size();j++)
        {
            func(i+1,a,N,s+str[j],res);
        }
    }
    vector<string> possibleWords(int a[], int N)
    {
        //Your code here
        vector<string>res;
        func(0,a,N,"",res);
        return res;
    }
};
