#include <stdio.h>
#include <stdlib.h>

struct node {
  int data;
  struct node *next; 
};
void printlist(struct node *n);
void insertfirst(struct node **n, int data);
void insertlast(struct node **n, int data);
int getlast(struct node *last);
int main (void){
  //Declaration of first and second node
  struct node *first, *last;
  //Allocate enough memory to hold the struct node
  first = malloc(sizeof(struct node));
  last = malloc(sizeof(struct node));
  //Initialize value for the data field of the node
  first->data = 1;
  last->data = 2;
  //Connect the nodes;
  first->next = last;
  last->next = NULL;
  ///////////////////////////////////////////////
  insertfirst(&first,25);
  printlist(first);
  insertlast(&last, 99);
  printlist(first);
  printf("%d\n", first->data);
    
  ////////////
}

void printlist(struct node *n){
  while(n != NULL){
    printf("%d --> ",n->data);
    n = n->next;
  }
  puts("NULL");
}

void insertfirst(struct node **n, int data){
  struct node *temp;
  temp = malloc(sizeof(struct node));
  temp->data = data;
  temp->next = *n;
  *n = temp;
}

void insertlast(struct node **n, int data){
  struct node *temp, *newnode;
  temp = malloc(sizeof(struct node));
  newnode = malloc(sizeof(struct node));
  newnode->data = data;
  temp = *n;
  while(temp->next != NULL){
    temp = temp->next;
  }
  temp->next = newnode;
}

int getlast(struct node *last){
  int x;
  while(last != NULL){
    last = last->next;
  }
  x = last->data;
  return x;
}

//TODO: finish the getlast func
