# Write a program in C to print reverse triangle pattern of any symbols #


#include<stdio.h>
int main()
{
    int i, j , row;
    printf("Enter number of rows\n");
    scanf("%d",&row);
    for(i = 1; i<=row; i ++)
    {
        for(j = row; j>=i; j --)
        {
            printf("*");
        }
        printf("\n");
    }
    printf("*----End of pattern----*\n");
    return 0;
}
