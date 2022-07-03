#include<stdio.h>
int main()
{
  int i,num,sum=0;
  printf("Enter your Series Ending number : " );
  scanf("%d", &num);
  sum=(num*(num+1))/2;
  printf("Your series and series sum is :");
  for (i=1;i<=num;i++)
  {
    if(num!=i){
      printf("%d+",i );
    }else{
      printf("%d...........+=%d",i,sum );

    }
  }

}
