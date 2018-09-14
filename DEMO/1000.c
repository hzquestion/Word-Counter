#include<stdio.h>
#include<string.h>

int main(){
    int i;
    char str[100];
    scanf("%s",str);
    i=strlen(str)-1;
    do{
        printf("%c",str[i]);
    }while(i--);
    return 0;
}
