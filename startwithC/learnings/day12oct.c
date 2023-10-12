#include <stdio.h>
int fnc(int);
int a =6;
int main()
{
    printf("factorial: %d",fnc(a));
}
int fnc(int x)
{   int n = 1;
    for(int i = 1; i < a; i++)
    {
        n *= x;
        x = a - i;
    }
    return n;
}