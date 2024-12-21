//c program to  swap 2 numbers without using arbitary variable
#include"stdio.h"
main()
{
        int a=5,b=7;
        printf("%d %d\n",a,b);
        a=a+b;
        b=a-b;
        a=a-b;
        printf("%d %d\n",a,b);
}
