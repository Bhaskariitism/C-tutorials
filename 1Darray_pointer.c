#include<stdio.h>

int main()
{
    int A[5] = {2,4,6,8,10};
    int *p;
    p = A;
    for(int i = 0; i<5 ; i++)
    {
        printf(" Address is = %d\n",p+i);
        printf(" Value is = %d\n",*(p+i));
        printf("Address is %d\n",&A[i]);
        printf("Value is = %d\n",A[i]);
    }
    
    return 0;
}