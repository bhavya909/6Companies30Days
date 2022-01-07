class Solution:
    def printMinNumberForPattern(ob,S):
        # code here 
        n=len(S)
        ans=[]
        for i in range(n+1):
            ans.append(str(i+1))
            # ans+=str(i+1)
            
        if S[0]=='I':
            I_POS=2
        else:
            I_POS=0
        
        i=0
        while(i<n):
            if S[i]=='I':
                I_POS=i+1
                i+=1
            else:
                while(i<n and S[i]=='D'):
                    i+=1
                j=i
                while I_POS<=j:
                    ans[I_POS],ans[j]=ans[j],ans[I_POS]
                    I_POS+=1
                    j-=1
                    
                I_POS=i+1
        
        m="".join(ans)
        return m
