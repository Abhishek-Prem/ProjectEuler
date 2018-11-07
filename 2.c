#include <stdio.h>

int main()
{
    int t; 
    long n, a, b, c, s;
    scanf("%d", &t);
    for(int a0 = 0; a0 < t; a0++)
    {
        scanf("%ld",&n);
        a=1; b=2; c=a+b; s=2;

        while(a+b<=n)
        {
            c=a+b;
            a=b;
            b=c;
            if(c%2==0) s=s+c;
        }
        
        printf("%ld\n", s);
    }
    return 0;
}
