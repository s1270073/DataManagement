#include<stdio.h>

int main(){

  int die1,die2,total=0;

  printf("Rolling dice...\n");
  printf("Die 1: ");
  scanf("%d",&die1);
  printf("Die 2: ");
  scanf("%d",&die2);
  total=die1+die2;
  printf("Total value: %d",total);
  printf("\n");

  return 0;
}
