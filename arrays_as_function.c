#include<stdio.h>
int SumOfElements(int A[])
{
    int Sum = 0;
     int size = sizeof(A)/sizeof(A[0]);
     printf("Size of A = %d and Size of A[0] = %d ",sizeof(A),sizeof(A[0]));
    for(int i = 0; i<size; i ++)
    {
        Sum +=  A[i];
    }

    return Sum;

}
int main()
{
    int A[] = {1,2,3,4,5};
   

    int sum = SumOfElements(A);
    printf("Sum is %d", sum);


}