// array = { 1, 2, 3, 4, 5, 6, 7, 8, 9 } 反转
#include <stdio.h>
#include <stdlib.h>


void reverse (int *array, int len) {
  int i  = 0, j = len - 1, tmp = 0;
  while (i != j) {
    if (array[i] != array[j]) {
      tmp = array[i];
      array[i++] = array[j];
      array[j--] = tmp;
    }
  } 
}

int main (void) {
  int array[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
  reverse(array, 9);
  int i = 0;

  while(i != 9)
    printf("%d\n", array[i++]);
  
  exit(0);
}
