#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int i;
    char lettre;
    char nomath[25]="";
    for(i=1;i<4;i++)
    {
    lettre=65+rand()%26;
    printf("%c",lettre);
    }
    printf("%s",nomath);
    return 0;
}
