#include <stdio.h>
// int fnc(int);
// int a =6;
// int main()
// {
//     printf("factorial: %d",fnc(a));
// }
// int fnc(int x)
// {   int n = 1;
//     for(int i = 1; i < a; i++)
//     {
//         n *= x;
//         x = a - i;
//     }
//     return n;
// }
int i = 0;
void val();
int main()
{   
    static int count = 5;
    printf("count: %d\n",count--);
    if(count != 0)
    main();
    return 0;
    // printf("%d\n",i);
    // i++;
    // val();
    // printf("%d\n",i);
    // val();
}
void val()
{
    i = 100;
    printf(" val's i = %d\n",i);
    i++;
}