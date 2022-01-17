#include<stdio.h>
int main()
{
  int grade;
  printf("Enter your marks to check the grade :" );
  scanf("%d",&grade );
  if(grade>=80 && grade<=100){
    printf("Your grade is A+");
  }else if(grade>=70 && grade<=89){
    printf("Your grade is A" );
  }else if(grade>=60 && grade<=69){
    printf("Your grade is A-" );
  }else if(grade>=50 && grade<=59){
    printf("Your grade is B+");
  }else if(grade>=40 && grade<=49){
    printf("Your grade is B-" );
  }else if(grade>=33 && grade<=39){
    printf("Your grade is C" );
  }else if(grade<=33 ){
    printf("Your grade is F");
  }else{
    printf("Your grade is not found");
  }
}
