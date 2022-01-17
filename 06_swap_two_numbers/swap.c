#include<stdio.h>
int main()
{
  int a=10;
  int b=20;
  printf("Before swaping \n");
  printf("%d %d \n",a,b );
  int temp;
  temp=a;
  a=b;
  b=temp;
  printf("After swaping \n");
  printf("%d %d \n",a,b );
}
