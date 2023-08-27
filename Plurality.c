#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main() {
  int del = 0, pia = 0;
  char *input = malloc(20);
  scanf("%s", input);
  
  while(strcmp(input, "Quit")!= 0){
  if(strcmp(input, "Del")==0){
    del++;
    printf("Vote: ");
    scanf("%s", input);
  } else if (strcmp(input, "Pia")==0){
    pia++;
    printf("Vote: ");
    scanf("%s", input);
  } else  {
    printf("Not valid, try again\n");
    printf("Vote: ");
    scanf("%s", input);
    }
  }
  printf("The total vote is\nDel: %d\nPia: %d\n", del, pia);
  printf("The winner is %s\n", (del>pia) ? "Del":"Pia"); 
}
