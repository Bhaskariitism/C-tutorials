#include<stdio.h>
#include<string.h>
int main()
{
    char name[]= "JHON";
    char* ch;
    ch = name;
    printf("%d\n", ch);
    printf("%d\n"*ch);
    printf("%s\n",name);
    printf("Size in bytes = %d\n", sizeof(name));
    int len;
    len = strlen(name);
    printf("%d",len);
    return 0;

}