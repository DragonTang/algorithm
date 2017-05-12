#include <stdio.h>
#include <assert.h>
#include "./sort-bubble.h"

void printArray (int *array, int size) {
  assert(array != NULL && size > 0);
  int i;
  for (i = 0; i < size; i++) {
    printf("%d\n", array[i]);
  }
}

int main (void) {
  int array[] = {9, 8, 7, 6, 5, 4, 3, 2, 1};
  sortBubble(array, sizeof(array) / sizeof(array[0]));
  printArray(array, sizeof(array) / sizeof(array[0]));
  return 0;
}
