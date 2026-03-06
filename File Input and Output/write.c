#include<stdio.h>
int main(){
    FILE *file_pointer;

    file_pointer=fopen("writing.txt","a");
    if(file_pointer==NULL){
        printf("\n File could not be opened!");
        return 1;
    }

    fprintf(file_pointer,"This is my first write operation\n");
    fprintf(file_pointer,"square of %d is %d\n",3,9);

    int result=fclose(file_pointer);
    if(result==0){
        file_pointer=NULL;
}else{
    printf("\n File was not closed properly!");
    return 1;
}
return 0;
}