//
//  main.c
//  C-project
//
//  Created by Bhaskar Biswas on 19/02/23.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
   // printf("--:$$Welcome a program to check wheather a given number is Prime or Composite$$:--\n");
    //printf("%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n");
    // insert code here...
    //int counter1 = 0, counter2 = 0;
    //int primecounter = 0;
    //int composite = 0;
    //int prime = 0;
    //printf("Enetr any number\n");
    //int n;
    //scanf("%d",&n);
    //printf("Entered number is %d\n",n);
    //for (int i = 1; i<=n; i ++) {
        
      //  if(n%i == 0)
        //    counter1 = counter1 + 1;
            
        //else
           // counter1 = counter1;
        //printf("%d\n",counter);
   // }
    
    
    //if(counter1 == 2)
      //  printf("%d Is Prime\n",n);
    //else
      //  printf("%d Is composite\n",n);
    printf("THIS PART IS TO CALCULATE NUMBER OF PRIMES IN GIVEN RANGE\n");
    int start, end, counter = 0, prime = 0 , composite = 0;
    printf("Enter start and end range :\n");
    scanf("%d%d", &start, &end);
    printf("Start and end are %d, %d\n", start, end);
    while (start>1) {
        while (start<=end){
            //printf("Start is %d\n",start);
            for (int j = 0; j<=start ; j++) {
                if(start%j == 0)
                    counter = counter + 1;
                else
                    counter = counter;
            }
           
            if(counter == 2){
                //printf("%d is Prime\n",start);
                prime = prime + 1;
            }
            else{
                //printf("%d is Composite\n",start);
                composite = composite + 1;
                //printf("%d\n", composite);
                
            }
            start = start + 1;
            counter = 0;
        }
        printf("The total number of Prime is %d\n",prime);
        printf("The total number of Composite is %d\n", composite);
    }
    
    printf("Please enter staring range from positive value\n");

    
    
    printf("Hello, World!\n");
    return 0;
}
