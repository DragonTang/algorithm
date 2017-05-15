#include "./binary-search.h"

int binarySearch (int array[], int size, int value) {
  int low = 0;
  int high = size - 1;
  int middle;
  assert(array != NULL && size > 0);
  while (low <= high) {
    middle = (low + high) / 2;
    if (value < array[middle])
      high = middle - 1;
    else if (value > array[middle])
      low = middle + 1;
    else
      return middle;
  }
  return -1;
}
