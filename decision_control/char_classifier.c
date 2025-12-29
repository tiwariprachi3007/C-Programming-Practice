#include<stdio.h>
int main(){
    char c;
    printf("enter a character:/n");
    scanf("%c",&c);
    if((c>='A'&&c<='Z'))
    printf("CAPITAL CASE LETTER");
    else if((c>='a'&&c<='z'))
    printf("small case letter");
    else if((c>='0'&&c<='9'))
    printf("digits");
    else
    printf("Special Symbols");
    return 0;

}