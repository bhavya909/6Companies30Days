class Solution{
public:
    int minSteps(int D){
       int tar=abs(D);
       int sum=0;
       int step=0;
       while(sum<tar || (sum-tar)%2!=0)
       {
           step++;
           sum+=step;
       }
       return step;
    }
};
