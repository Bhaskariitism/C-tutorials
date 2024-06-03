#include<stdio.h>
int main()
{
    int c, f, step, low, upper; 
    printf("Enter step you want:-\n");
    scanf("%d",&step);
    printf("Enter low limit of scale you want:-\n");
    scanf("%d",&low);
    printf("Enter upper limit you want:-\n");
    scanf("%d",&upper);
    printf("Celcius Farenheit\n");
    for (int f = low; f <= upper; f = f + step)
    {
        c = 5*(f - 32)/9;
        printf("    %d       %d\n", c,f);
    }
    
    return 0;
}