#include<stdio.h>
#include<math.h>
int nmaghal(int x)
{
    int n=0;
    for(int i=1;i<=x;i++)
    {
        if((x%i)==0)
        {
            n=n+1;
        }
    }
    return n;
}
int P(int a,int b,int c,int i)
{
    return a*pow(i,2)+b*i+c;
}
int main()
{
    int a,b,c,n,k,t;
    t=-118490;
    scanf("%d %d %d\n",&a, &b, &c);
    scanf("%d\n",&n);
    scanf("%d",&k);
    for(int i=0;i<n;i++)
    {
        if((nmaghal(P(a,b,c,i)))>=k)
        {
            t=P(a,b,c,i);
            break;
        }
    }
    if(t==-118490)
    {
        printf("No match found!");
    }
    else
    {
        printf("%d",t);
    }
    return 0;
}
