#include <stdio.h> 
void myStrRev(char*); 
int main() 
{ 
    char S[100]; 
    printf("Enter the String: "); 
    gets(S); 
    myStrRev(S); 
    printf("Reversed String: "); 
    puts(S); 
    return 0; 
} 
void myStrRev(char *p) 
{ 
    int l=0, i, j; 
    char Temp; 
    while(*(p+l)!='\0') 
    { 
        l=l+1; 
    } 
    for(i=0, j=l-1; i<=l-1, i<j; i++, j--) 
    { 
        Temp = *(p+i); 
        *(p+i) = *(p+j); 
        *(p+j) = Temp; 
    } 
} 