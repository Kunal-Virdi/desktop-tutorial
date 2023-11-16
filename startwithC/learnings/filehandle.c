#include <stdio.h>
int main(){
    FILE *fpr;
    char c;
    fpr = fopen("myfile.txt","r");
    if(fpr == NULL){
    puts("empty!!");
    return 0;}
    while(1){
        c = fgetc(fpr);
        if(c == EOF)
        break;
        printf("%c",c);
    }
    printf("\n");
    fclose;
    return 0;
}