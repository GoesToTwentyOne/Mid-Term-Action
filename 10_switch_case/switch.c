#include<stdio.h>
int main(){
  char a;
  printf("Check the char I'm press in keyboard: ");
  scanf("%c",&a);
  switch (a) {
    case 'A':
      printf("You press from the keyboard A");
      break;
    case 'E':
      printf("You press from the keyboard E");
      break;
    case 'I':
      printf("You press from the keyboard I");
      break;
    case 'O':
      printf("You press from the keyboard O");
      break;
    case 'U':
      printf("You press from the keyboard U");
      break;
    default:
      printf("not found");
  }

}
