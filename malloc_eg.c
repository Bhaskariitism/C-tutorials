#include<stdio.h>

int main()
{
    int n;
    printf("Enter size of array\n");
    scanf("%d",&n);
    int *A = malloc(n*sizeof(int));
    for(int i = 0; i < n ; i ++)
    {
        A[i] = i+1;
        
    }
    for(int i = 0; i < n ; i ++)
    {
        printf("%d\n",A[i]);
        
    }
    return 0;
}