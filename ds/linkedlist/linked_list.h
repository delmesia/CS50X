#include <stdlib.h>
#include <stdio.h>

struct Node {
  int value;
  struct Node *next;
};

struct Node *head, *tail;

void print_nodes(struct Node *h){
  while (h != NULL) {
    printf("%d --> ",h->value);
    h = h->next;
  }
  puts("NULL");
}
void initalize(){
  int data = 0;
  puts("Please enter a number to insert at the first node:");
  scanf("%d", &data);
  struct Node *newNode = malloc(sizeof(struct Node));
  newNode->value = data;
  newNode->next = NULL;
  head = newNode;
}
