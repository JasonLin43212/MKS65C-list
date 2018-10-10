#include <stdio.h>
#include <stdlib.h>
#include "list.h"

void print_list(struct node * a_node){
  while (a_node -> next){
    printf("[%d]->",a_node->i);
    a_node = a_node -> next;
  }
  printf("[%d]\n",a_node->i);
}


struct node * insert_front(struct node * a_node, int num){
  struct node * newNode = calloc(sizeof(struct node),1);
  newNode->i = num;
  newNode->next = a_node;
  return newNode;
}

struct node * free_list(struct node * a_node){
  struct node * beginning = a_node;
  while(a_node->next){
    struct node * next_node = a_node->next;
    a_node -> i = 0;
    a_node -> next = 0;
    free(a_node);
    a_node = next_node;
  }
  a_node -> i = 0;
  a_node -> next = 0;
  free(a_node);
  return beginning;
}
