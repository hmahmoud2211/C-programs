#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

void main(){
   printf("QUESTION6:\n");

     int o=1;
char string[300];
    FILE *ptr;
 ptr = fopen("file.txt", "w");
 fprintf(ptr,"guess number of words in this file");
 fclose(ptr);
 ptr = fopen("file.txt", "r");

 fgets(string,200,ptr);
 
 for(int i=0;i<200;i++)
 {
 if(string[i]==' '||string[i]=='\n')
 o++;
 }
 
 printf("number of words in the file is: %d",o);
 
 fclose(ptr);
}