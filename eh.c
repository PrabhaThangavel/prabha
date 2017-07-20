#include<stdio.h>
int main()
{
    int N,M,A,k=0,s,t,c=0,x,y,count=0;
    scanf("%d %d %d",&N,&M,&A);
    int B[M][2],C[N-1],S[N];
    for(x=0;x<M;x++)
{
    for(y=0;y<A;y++)
    {
        scanf("%d\t",&B[i][j]);
       
    }
}
for(x=0;x<N;x++)
{
    scanf("%d",&S[i]);
}
for(x=0;x<N;x++)
{
    t=i;
    for(y=0;y<2;y++)
    {
        s=j;
        if(B[x][y]==A&&y==0)
        {
            C[k]=B[x][y+1];
            k++;
            for(x=0;x<N;x++)
            {
                for(y=0;y<2;y++)
                {
                    if(B[x][y]==B[t][s+1]&&y==0)
                    {
                        C[k]=B[x][y+1];
                        k++;
                    }
                }
            }
        }
        y=s;
    }
    x=t;
}
for(i=0;i<k;i++)
{
    if(S[A-1]>S[C[i]-1])
    {
        count++;
    }
}
printf("%d",count);

   
}
