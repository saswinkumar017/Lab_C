#include<stdio.h>
int main(){ 
    char str[6] = "Hello"; 
    int i;
     for(i = 0; str[i]; i++) {
        printf("&str[%d] = %p\n" ,i, str+i);
     }
     
     return 0;
     }