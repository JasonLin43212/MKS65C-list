#include <stdio.h>
#include <stdlib.h>
#include "list.h"

int main() {
  struct node * foo = NULL;
  printf("Printing foo: ");
  print_list(foo);
  printf("Adding 52 to foo.\nPrinting foo: ");
  foo = insert_front(foo,52);
  print_list(foo);
  printf("Adding -38 to foo.\nPrinting foo: ");
  foo = insert_front(foo,-38);
  print_list(foo);
  printf("Adding 109 to foo.\nPrinting foo: ");
  foo = insert_front(foo,109);
  print_list(foo);
  printf("Adding 0 to foo.\nPrinting foo: ");
  foo = insert_front(foo,0);
  print_list(foo);
  printf("Adding 25 to foo.\nPrinting foo: ");
  foo = insert_front(foo,25);
  print_list(foo);
  printf("Freeing list foo:\n");
  foo = free_list(foo);
  printf("Printing foo:");
  print_list(foo);
  return 0;
}
