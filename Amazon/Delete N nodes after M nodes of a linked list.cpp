class Solution
{
    public:
    void linkdelete(struct Node  *head, int M, int N)
    {
        //Add code here 
        Node *p=head;
        
        while(p)
        {
            int i=0;
            while(p && i<M-1)
            {
                p=p->next;
                i++;
            }
            if(p==NULL)
            break;
            Node *q=p->next;
            int j=0;
            while(j<N && q)
            {
                q=q->next;
                j++;
            }
            p->next=q;
            p=p->next;
        }
    }
};

