#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c;
    printf("4.1\n  a=10"); a=10;
    printf("\n  b=100"); b=100;
    printf("\n  c:");scanf("%d",&c);

    int l=(c-a), r=(b-c), res;
    l=abs(l)/l; r=abs(r)/r; res=(l+r)/2;

    printf("    %d (1 is Yes, 0 is No)\n",res);

    printf("\n4.2\n");
    int x; scanf ("%x", &x);
    printf("%d",(x>>16)%2 );

    return 0;
}
