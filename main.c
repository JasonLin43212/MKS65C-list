#include <stdio.h>
#include <stdlib.h>
#include "list.h"

int main() {
  struct node * foo = insert_front(NULL,3);
  struct node * boo = insert_front(foo,5);
  struct node * moo = insert_front(boo,7);
  struct node * loo = insert_front(moo,29);
  printf("Printing foo: ");
  print_list(foo);
  printf("Printing boo: ");
  print_list(boo);
  printf("Printing moo: ");
  print_list(moo);
  printf("Printing loo: ");
  print_list(loo);
  printf("Inserting too with value 88 and next as boo\n");
  struct node * too = insert_front(boo,88);
  printf("Printing too: ");
  print_list(too);
  printf("Proceeding to free_list(moo)\n");
  printf("Freed Address: %p\n",free_list(moo));
  printf("Value at Freed: %d\n",free_list(moo)->i);
  printf("Printing moo: ");
  print_list(moo);
  return 0;
}
