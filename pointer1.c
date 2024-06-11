#include<stdio.h>
int main()
{

    int a[]={1,2,3,4,5}, *ptr;
    int len = sizeof(a);
    ptr = &a[0];

    for (int i = 0; i < 5; i++)
    {
        printf("\n The %d value is %d\n",i, *(ptr+i));
        printf("\n The adress is %d\n", ptr+i);
    
    }
    return 0;
}