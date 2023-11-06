#include <stdio.h>
void funct1();
void funct2();
void main(){
    funct2();
}
void funct2(){
    struct 
    {
        int kind;
        union 
        {
            int kindwage;
            int moneywage;
        }wage;
        
    }rate[10];
    int m,n;
    puts("enter int number of labourers on daily wages");
    scanf("%d",&n);
    for(m=0;m<n;++m)
    {
        puts("kind of wage: enter 0 for kind, 1 for cash");
        scanf("%d",&n);
        if(rate[m].kind==0){
            rate[m].wage.kindwage = 6;
        }else
        rate[m].wage.moneywage = 30;
    }
    puts("no.  Quantity(Kgs.) Cash(Rs.)");
    for(m=0;m<n;++m)
    {
        if(rate[m].kind==0)
        printf("%2d %15d\n",m+1,rate[m].wage.kindwage);
        else 
        printf("%2d %15d\n",m+1,rate[m].wage.moneywage);
    }
    
}
void funct1()
{
    union digit
    {
        char c;
        int intnum;
        long longnum;
        float floatnum;
        double doublenum;
    }data;
    union rec
    {
        char *num;
        char *designation;
        float pay;
    } *account;
    struct
    {
        int kind;
        union 
        {
            int kindwage;
            float moneywage;
        }wage;
        
    }dailywage[20];
    union
    {
        char alphabet;
        char punctuation;
        char space;
        char digit;
    }page[20][50];
    printf("size of data         =%d\n",sizeof(data));
    printf("size of account      =%d\n",sizeof(account));
    printf("size of wage         =%d\n",sizeof(dailywage[0].wage));
    printf("size of dailywage    =%d\n",sizeof(dailywage));
    printf("size of page         =%d\n",sizeof(page));
    
    
}