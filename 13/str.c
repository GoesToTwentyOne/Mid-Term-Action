#include <stdio.h>
#include <string.h>

int main() {
   char s[100],t[100];
   int i;
   printf("\nEnter the First name: ");
   gets(s);
   printf("\nEnter the Last name: ");
   gets(t);
   s[0]=s[0]-32;
   t[0]=t[0]-32;
   printf("\nString in Upper Case = %s-%s", s,t);
   return 0;
}
