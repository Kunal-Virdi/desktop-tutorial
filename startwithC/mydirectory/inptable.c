#include<stdio.h>
#include<conio.h>
void main()
{
    int a, b=1;
    printf("enter");
    scanf("%d", & a);
    while(b<=10)
    {
        printf("\n%d x %d = %d",a,b,(a*b));
        b++;
        a++;
    }
    getch();
    
}