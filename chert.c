#include <stdio.h>
#include <math.h>

int main()
{
    char c;
    int t,x;
    int sign=1;
    int n=1;
    int m=0;
    long long sum=0;
    scanf("%d\n",&x);
    while(1)
    {
        c=getchar();
        if(c=='\n')
        {
            break;
        }
        if(c=='^')
        {
            scanf("%d",&t);
            int f=(int)pow(x,t);
            sum+=sign*n*f;
            //printf("%d %d %d ",sign,n,f);
            n=1;
            m=0;
        }
        else if(c=='+')
        {
            sign=1;
        }
        else if(c=='-')
        {
            sign=-1;
        }
        else if((c=='x')||(c==' ')||(c=='*'))
        {

        }
        else
        {
            m *= 10;
            m += c - '0';
            n=m;
        }
    }
    printf("%lld",sum);
}
