#include<stdio.h>
#include<string.h>

int main()
{
    char name[5];
    char* ch;
    ch = &name;
    name[0] = 'J';
    name[1] = 'H';
    name[2] = 'O';
    name[3] = 'N';
    name[4] = '\n';
    *ch = 'A';
    int len = strlen(name);
    for (int i = 0; i<len;i++)
    {
        printf("Address at pointer is %d\n",(ch+i));
    }
    
    

    return 0;
}