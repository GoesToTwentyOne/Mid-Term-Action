#include<stdio.h>
int main()
{
  int arr[100];
  int sum=0,i,num;
  float avg;
  printf("Enter your limit of avg :");
  scanf("%d", &num);
  for(i=0;i<num;i++){
    printf("arr[%d] : ",i+1);
    scanf("%d",&arr[i] );
    sum=sum+arr[i];

  }
  printf("Total sum of your numbers :%d\n",sum );
  printf("Average of your numbers : %.3f\n",avg=sum/num );
}
