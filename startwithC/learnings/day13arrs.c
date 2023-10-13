#include <stdio.h>
int *fun(int * num);
void display1(int[],int);
void display2(int *,int);
int main()
{
    int *ptr,i;
    int arr[] = {1,2,3,4,5};
    ptr = arr;
    for(i=0;i<5;i++){
        printf("address: %u, value: %d\n",ptr+i,*(ptr+i));
    }
    display1(arr,5);
    display2(&arr[0],5);
    int max,*p;
    p = fun(&max);
    for(i=0;i<max;i++){
        printf("%d\t",p[i]);
    }
    // x = &arr[1];
    // y = &arr[4];
    // printf("x is %d\n y is %d",x,y);
    // printf("\n%d",y-x);

    // return 0;
    // for(i=0;i<5;i++){
    //     display1(arr[i]);
    // }
    // printf("\n");
    // for(i=0;i<5;i++){
    //     display2(arr+i);
    // }
//     p = arr;
//     printf("1st value %d\n",arr[1]);
//     printf("1st value %d\n",*(p+1));
//     printf("1st value %d\n",1[arr]);
//     printf("*p + 1 %d\n",*p+1);
//     printf("1st address %u\n",p+1);
//     printf("1st address %u\n",&arr[1]);
    return 0;

}
// void display1(int x)
// {
//     printf("%d ",x);
// }
// void display2(int *x)
// {
//     printf("%d ",*x);
// }
void display1(int ptr[],int n)
{
    int i;
    for(i=0;i<n;i++){
        printf("element: %d\n",ptr[i]);
    }
}
void display2(int *ptr,int n)
{
    int i;
    for(i=0;i<n;i++){
        printf("element: %d\n",*(ptr + i));
    }
}
int *fun(int *num)
{
    static int arr[] = {10,20,30,40,50};
    *num = sizeof(arr)/sizeof(arr[0]);
    return arr;
}