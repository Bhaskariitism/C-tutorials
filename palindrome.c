#include<stdio.h>
int main()
{
    int n, rev= 0, rem, orginal;
    printf("Enter any integer:- \n");
    scanf("%d",&n);
    orginal = n;
    while (n!=0)
    {
        rem = n%10;
        rev = rev*10 + rem;
        n = n/10;
    }
    printf("Reverse of the string is %d\n", rev);
    if(rev-orginal == 0)
    {
        printf("Input string is palindorme\n");
    }
    else
        printf("Input string is not a palindorme\n");
    return 0;
}