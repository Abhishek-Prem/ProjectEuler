#include <stdio.h>

int main()
{
    int t, i, an;
    long int n, num, s; 
    scanf("%d",&t);
    for(int a0 = 0; a0 < t; a0++)
    {
        s=0;
        scanf("%ld", &num);
        
        for(i=num-1; i>=num-3; --i)
            if(i%3==0)
                an=i;
        n=an/3+1;
        s=s+an*n/2;
        
        for(i=num-1; i>=num-5; --i)
            if(i%5==0)
                an=i;
        n=an/5+1;
        s=s+an*n/2;
        
        for(i=num-1; i>=num-15; --i)
            if(i%15==0)
                an=i;
        n=an/15+1;
        s=s-an*n/2;
        
        printf("%ld\n", s);
    }
    return 0;
}
