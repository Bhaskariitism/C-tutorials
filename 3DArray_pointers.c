#include<stdio.h>

void Func(int *A[][2])

int main()
{
    int C[3][2][2] = {{{2,3},{4,5}},{{6,7},{8,9}},{{10,11},{12,13}}};
    printf("%d\n",C[2][1][0]);
    return 0;
}