#include <stdio.h>
void stairs();
void stairs2();
void pyramid();
int main()
{
    stairs();
    printf("\n");
    stairs2();
    printf("\n");
    pyramid();
}
void stairs()
{
    for(int row = 1;row <= 5; row++){
        for(int column = 1;column <= row;column++){
            printf("1");
        }
        printf("\n");
    }
}
void stairs2()
{
     for(int row = 1;row <= 5; row++){
        for(int column = 1;column <= row;column++){
            printf("%d",row);
        }
        printf("\n");
    }
}
void pyramid()
{
    int row,i,space,k=0;
    puts("enter row: ");
    scanf("%d",&row);
    for(i=1;i<=row;++i,k=0)
    {
        for(space = 1; space<= row - i; ++space)
        {
            printf("  ");
        }
        while(k!=2*i-1)
        {
            printf("* ");
            ++k;
        }
        printf("\n");
    }
}