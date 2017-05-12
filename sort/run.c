#include <stdio.h>
#include <assert.h>
#include "./sort-bubble.h"
#include "./insert-sort.h"

void printArray (int *array, int size) {
  assert(array != NULL && size > 0);
  int i;
  for (i = 0; i < size; i++) {
    printf("%d ", array[i]);
  }
  printf("\n");
}

int main (void) {
  int array[] = {9, 8, 7, 6, 5, 4, 3, 2, 1, 1, 2, 3, 4, 5, 6, 7, 8, 9};
  // sortBubble(array, sizeof(array) / sizeof(array[0]));
  insertSort(array, sizeof(array) / sizeof(array[0]));
  printArray(array, sizeof(array) / sizeof(array[0]));
  return 0;
}
