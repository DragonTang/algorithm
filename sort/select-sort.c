// 9 8 7 6 5 4 3 2 1
#include <stdio.h>
#include <stdlib.h>

#define swap(num, num1, tmp) do {  \
  tmp = num;                       \
  num = num1;                      \
  num1 = tmp;                      \
} while(0)                            
		
static inline void selectSort (int *const array, const int len) {
  int i, index, j, tmp;
  for (i = 0; i < len - 1; i++) {
    index = i;
    for (j = i; j < len - i; j++)
      if (array[j] < array[index])
        index = j;
    swap(array[i], array[index], tmp);
  }
}

int main (const int argc, const char **argv) {
  int array[] = { 9, 8, 7, 6, 5, 4, 3, 2, 1 };  
  selectSort(array, 9);
  int i = 0;
  while(i < 9)
    printf("%d\n", array[i++]);
  exit(0);
}
