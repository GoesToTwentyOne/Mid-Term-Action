#include<stdio.h>
int main(){
  int num;
  int sum = 0;
  printf("Enter your number :");
  scanf("%d",&num );
  for(int i=1;i<=num;i+=2){
    sum=sum+(i*i);
  }
  printf("Your series is :");
  for(int i=1;i<=num;i+=2){
    if (num!=i){
      printf("%d^2+",i );
    }else{
      printf("%d^2........................+=%d",i,sum );
    }
  }
}
