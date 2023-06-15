#include<stdio.h>

int main(){

  int die1,die2,total=0;
  char name[20];

  printf("What is your name?\n> ");
  scanf("%s",name);
  printf("Hello, %s!\n",name);
  printf("Rolling the dice...\n");
  printf("Die 1: ");
  scanf("%d",&die1);
  printf("Die 2: ");
  scanf("%d",&die2);
  total=die1+die2;
  printf("Total value: %d \n",total);
  if(total>7){
    printf("%s won!",name);
  }
  else{
    printf("%s lost!",name);
  }
  
  printf("\n");

  return 0;
}
