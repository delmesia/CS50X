#include <stdlib.h>
#include <stdio.h>

struct Node {
  int value;
  struct Node *next;
};

struct Node *head;

void insert_first(struct Node **head){
  int data;                                                             // Create a variable to hold the new data to be inserted
  puts("Enter a number you want to insert in the first of the list: "); // Ask the caller for an input
  scanf("%d", &data);                                                   // Store the input to the created variable
  struct Node *temp = malloc(sizeof(struct Node));                      // Set a chunk for memory to store the temporary node
  temp->value = data;                                                   // store the new data to the new node we've created
  temp->next = *head;                                                   // Make the temporary node points to whatever the head node points to.
  *head = temp;                                                         // Copy the temporary node to where the head node points to
}

void printlist(struct Node *head){
  while(head != NULL){
    printf("%d --> ", head->value);
    head = head->next;
  }
  puts("NULL");
}

