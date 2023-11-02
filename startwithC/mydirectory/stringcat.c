#include <stdio.h>
#include <string.h>
char xstrcpy(char *,const char*);
int main()
{
    char source[] = "Folks!";
    char target[30]= "Hello"; 
    xstrcpy(target,source);
    printf("%s\n",target);
    return 0;
}
char xstrcpy(char *t,const char *s)
{
    int x = strlen(t);
    while(*t != strlen(t))
    {
        *(t+x) = *s;
        t++;s++;
    }
}