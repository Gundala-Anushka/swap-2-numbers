//c program to swap 2 numbers sing XOR
#include"stdio.h"
main()
{
        int a=5,b=7;
        printf("%d %d\n",a,b);
        a^=b^=a^=b;
        printf("%d %d\n",a,b);
}
