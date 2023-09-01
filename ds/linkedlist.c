#include <stdio.h>
#include <stdlib.h>
struct node {
  int data;
  struct node *next;
};

void printList(struct node *p){
  while(p != NULL){
    printf("%d --> ",p->data);
    p = p->next;
  }
  puts("NULL");
}

void insertFirst(struct node **p, int data){
  struct node *temp;
  temp = malloc(sizeof(struct node));
  temp->data = data;
  temp->next = *p;
  *p = temp;
}

void insertLast(struct node **p, int data){
  struct node *temp, *newNode;
  temp = malloc(sizeof(struct node));
  newNode = malloc(sizeof(struct node));
  newNode->data = data;
  temp = *p;
  while(temp->next != NULL){
    temp = temp->next;
  }
  temp->next = newNode;
  
}


int main(void){

  struct node *one,*two,*three,*head;
  one = malloc(sizeof(struct node));
  two = malloc(sizeof(struct node));
  three = malloc(sizeof(struct node));

  one->data = 10;
  two->data = 20;
  three->data = 30;

  one->next = two;
  two->next = three;
  three->next = NULL;
  head = one;
  insertFirst(&head,5);
  insertLast(&head,25);
  printList(head);

}
