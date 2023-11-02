#include <stdio.h>
#include <string.h>
void main()
{
    int dd,mm,yy;
    // char k ='k';
    // char g = 'G';
    // int x = k-g;
    // char st1[] = "Jerry",st2[] = "Ferry";
    // printf("%d",strcmp(st1,"Ferry"));
    // printf("\n%d",x);
    printf("enter date:\n");
    scanf("%d%*c%d%*c%d",&dd,&mm,&yy);
    printf("%d/%d/%d",dd,mm,yy);
}