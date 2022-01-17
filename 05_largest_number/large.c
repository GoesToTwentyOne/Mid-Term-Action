#include<stdio.h>
int main()
{
  int num1,num2,num3;
  scanf("%d %d %d",&num1,&num2,&num3);
  if (num1>num2 && num1>num3){
    printf("Largest number among %d,%d and %d is : %d\n",num1,num2,num3,num1 );
  }else if(num2>num1 && num2>num3){
    printf("Largest number among %d,%d and %d is : %d\n",num1,num2,num3,num2 );
  }else if(num1==num2 && num2==num3){
    printf(" %d,%d and %d are Equal\n",num1,num2,num3 );
  }else{
    printf("Largest number among %d,%d and %d is : %d\n",num1,num2,num3,num3 );
  }
}
