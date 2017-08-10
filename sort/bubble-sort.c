#include "./bubble-sort.h"

void bubbleSort(int *array, int length) {
  int i, j;
  for (i = 1; i < length; i++)
    for (j = 0; j < length - i; j++)
      if (array[j] > array[j + 1])
        swap(&array[j], &array[j + 1]);
}

void swap (const int *num1, const int *num2) {
  int tmp = *num1;
  *num1 = *num2;
  *num2 = tmp;
}
