// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
    printf("This Program is to reverse any given number\n");
    int n,rem = 0,rev;
    
    printf("Enter any positive number: - ");
    scanf("%d",&n);
    while(n!=0){
    rem = n%10;
   rev = rev*10 + rem;
    n = n/10;
    }
     printf("Reversed number = %d\n",rev);
    

    return 0;
}
