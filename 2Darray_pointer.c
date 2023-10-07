#include<stdio.h>

int main()
{
    int B[2][3] = {{2,3,4},{5,6,7}};
    int *p;
    p = B;
    /* for (int i = 0 ; i < 2; i++)
    {
        for (int j = 0; j< 3; j++)
        {
            printf("Address = %d\n", &B[i][j]);
            printf("Value is = %d\n", B[i][j]);
            
        }

    }*/
    /*printf("End of for LOOP\n");
    printf(" Value is = %d\n",B[0][1]);
    printf("Address is = %d\n",&B[0][1]);
    printf("Value is = %d\n",*p+2);
    printf("Address is = %d\n", p+2);*/

    printf("Value is = %d\n", B[1][2]);
    printf("Next line\n");
    printf("Value is = %d\n", *(p+);
    printf("Next line\n");
    printf("Value is = %d\n", *p+2);
    


    return 0;
}