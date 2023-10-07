#include<stdio.h>

int add(int a, int b)

{
 int c;
 c = a+b;
 printf("The sum is %d",c);
 return c;

}

int main()
{
    int x,y;
    printf("Enter x and y \n");
    scanf("%d,%d",&x,&y);
 
    add(x,y);

 return 0;

}