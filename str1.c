#include<stdio.h>
 
char* encode(char* str) {
   int i = 0;
 
   while (str[i] != '\0') {
      str[i] = str[i] - 30;  // Subtract 30 From Charcter
      i++;
   }
   return (str);
}
 
int main() {
 
   char *str;
 
   printf("\nEnter the String to be Encode : ");
   scanf("%d",&str);
 
   str = encode(str);
   printf("\nEncoded String : %s", str);
 
   return 0;
}
