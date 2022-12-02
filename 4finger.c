#include<stdio.h>
#include<math.h>
int b1tob10(int x, int base)
{
    int m,t;
    int s=0;
    int i=0;
    while(x>0)
    {
        m = x % 10;
        x = x /10;
        t = m * pow(base,i);
        i++;
        s+=t;
    }
    return s;
}
int b10tob2(int x, int base)
{
    int m,t;
    int s=0;
    int i=0;
    while(x>0)
    {
        m = x % base;
        x = x /base;
        t = m * pow(10,i);
        i++;
        s+=t;
    }
    return s;
}
int nesfa(int x)
{
    int a,b;
    int m = x;
    int i=0;
    while(m>0)
    {
        m /=10;
        i++;
    }
    if((i%2)==1)
    {
        i++;
        x *=10;
    }
    i/=2;
    a= x/pow(10,i);
    b= pow(10,i);
    b= x%b;
    return a;
}
int nesfb(int x)
{
    int a,b;
    int m = x;
    int i = 0;
    while(m>0)
    {
        m/=10;
        i++;
    }
    if((i%2)==1)
    {
        i++;
        x*=10;
    }
    i/=2;
    a = x/pow(10,i);
    b = pow(10,i);
    b = x%b;
    return b;
}
int main()
{
    int base1,base2,x,a,b,s;
    scanf("%d %d\n%d",&base1, &base2, &x);
    x = b1tob10(x, base1);
    x = b10tob2(x, base2);
    a = b1tob10(nesfa(x), base2);
    b = b1tob10(nesfb(x), base2);
    s = a + b;
    s = b10tob2(s, base2);
    printf("%d", s);
}
