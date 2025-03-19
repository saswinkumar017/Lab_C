#include <stdio.h>
#include <string.h>
void main()
{
int choice;
char str1[50],str2[50];
printf(“Menu to perform string operation\n”);
printf("1. String Concatenation\n");
printf("2. String Copy\n");
printf("3. Length of a String\n");
printf("4. Reverse a string\n");
printf("Enter the option:\n");
scanf("%d", &choice);
switch(choice){
case 1 :
printf("String Concatenation\n");
printf("Enter the first string: ");
scanf("%s",&str1);
printf("\n Enter the second string: ");
scanf("%s", &str2);
strcat(str1,str2);
printf("\n After concatenation: %s",str1);
break;
case 2 :
memset(str1,'\0',sizeof(str1));
memset(str1,'\0',sizeof(str1));
printf("String Copy\n");
printf("\n Enter the string to be copied: ");
scanf("%s", &str2);
printf("\nBefore string copy: %s",str1);
strcpy(str1,str2);
printf("\nAfter string copy:%s",str1);
break;
case 3 :
printf("Length of a String\n");
memset(str1,'\0',sizeof(str1));
memset(str1,'\0',sizeof(str1));
printf("\n Enter the string to find length: ");
scanf("%s", &str1);
printf("The length of the string is %d",strlen(str1));
break;
case 4 :
printf("String reverse\n");
//memset(str1,'\0',sizeof(str1));
//memset(str1,'\0',sizeof(str1));
printf("\n Enter the string to be reversed: ");
scanf("%s", &str1);
printf("The reversed string is%s",strrev(str1));
break;
default: printf("Invalid Input !!!!\n");
break;
}
}