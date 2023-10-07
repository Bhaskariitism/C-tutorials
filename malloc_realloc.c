#include<stdio.h>

int main()
{
    int a;
    int *p;
    p = (int*)malloc(sizeof(int));
    *p = 10;
    free(p);
    p = (int*)malloc(sizeof(int));
    *p = 20;

    return 0;
    
}