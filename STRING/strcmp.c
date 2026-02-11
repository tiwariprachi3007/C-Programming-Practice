#include<stdio.h>
#include<string.h>
int main(){
    //comparing "apple" with "banana"
    int comparisonResult=strcmp("apple","banana");
    printf("comparing 'apple' with 'banana': %d\n",comparisonResult);

    //comparing "grape" with "grape"
    comparisonResult=strcmp("grape","grape");
    printf("comparing 'grape' with 'grape': %d\n",comparisonResult);
    //comparing "orange" with "apple"
    comparisonResult=strcmp("orange","apple");
    printf("comparing 'orange' with 'apple': %d\n",comparisonResult);
    return 0;

}