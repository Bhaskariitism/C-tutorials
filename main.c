#include<stdio.h>

int main()
{
    int a = 5;
    int *ptr;
    ptr = &a;
    int **qtr;
    qtr = &ptr;
    int ***rtr;
    rtr = &qtr;
    printf("The value is %d\n",a);
    printf(" The address is %d\n",ptr);
    printf("The value is %d\n",*ptr);
    
    printf("The adress is %d\n",qtr);
    printf("The value is %d\n",*qtr);
    printf("The adress is %d\n", rtr);
    printf("The value is %d\n",*rtr);
    ***rtr = 20;
    printf("The value is %d\n",a);
    
    return 0;
}