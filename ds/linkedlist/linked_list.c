#include <stdlib.h>
#include <stdio.h>

#include "linked_list.h"

int main(void){
  insert_first(&head);
  printlist(head);
  insert_first(&head);
  printlist(head);
}
