#include <stdio.h>
#include <stdlib.h>
#include "list.h"

void print_list(struct node * a_node){
  if (!a_node){
    printf("[]\n");
  }
  else {
    while (a_node -> next){
      printf("[%d]->",a_node->i);
      a_node = a_node -> next;
    }
    printf("[%d]\n",a_node->i);
  }
}

struct node * insert_front(struct node * a_node, int num){
  struct node * newNode = (struct node *)malloc(sizeof(struct node));
  newNode->i = num;
  newNode->next = a_node;
  return newNode;
}

struct node * free_list(struct node * a_node){
  while(a_node){
    struct node * original = a_node;
    a_node = a_node -> next;
    original -> next = NULL;
    free(original);
  }
  return a_node;
}
