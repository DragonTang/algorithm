#include "./sort-bubble.h"

void sortBubble (int array[], int size) {
  int i, j;
  for (i = 0; i < size - 1; i++)
    for (j = 0; j < size - i - 1; j++)
      if (array[j] > array[j + 1]) swap(&array[j], &array[j + 1]);
}

void swap (int * const val1, int * const val2) {
  int tmp = *val1;
  *val1 = *val2;
  *val2 = tmp;
}
