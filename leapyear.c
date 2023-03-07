#include <stdio.h>

int main() {
    // Write C code here
    printf("This Program will give you output as the given year is leap year or not \n");
    int year;
    
    printf("Enter  year: - ");
    scanf("%d",&year);
    if(year%4 == 0 || year%400==0 && year%100 != 0)
    printf("This is leap year");
    else 
    printf("Not a leap year");
     

    return 0;
}
