#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
  int num, i;
  srand ( time(NULL) );

  for(i = 0; i < 5; i++){
    num = 50 + rand() % 6;
    printf("%d\t", num);
  }
  printf("\n");
  for(i = 0; i < 5; i++){
    num = (1 + rand() % 5) * 2;
    printf("%d\t", num);
  }
  printf("\n");
  for(i = 0; i < 5; i++){
    num = (1 + (1 + rand() % 5) * 2);
    printf("%d\t", num);
  }
  printf("\n");
  for(i = 0; i < 5; i++){
    num = (2 * (1 + (1 + rand() % 5) * 2));
    printf("%d\t", num);
  }
  printf("\n");
  return 0;
}
