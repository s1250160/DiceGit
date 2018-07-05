#include<stdio.h>
#include<stdlib.h>

int main(){
  int a,b;

  srand(time(NULL));
  a = rand() % 6 + 1;
  printf("Rolling the dice...\nDie 1: %d\n",a);
  b = rand() % 6 + 1;
  printf("Die 2: %d\n",b);  
  printf("Total value: %d\n",a + b);
  
  return 0;
}
