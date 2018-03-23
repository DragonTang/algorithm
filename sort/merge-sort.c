//  2 6 9 10 11 15  1 3 5 7 9
//  f           mid         end
#include <stdio.h>
#include <stdlib.h>

void mergeArray (int first, int mid, int end, int *array) {
  int len = end - first + 1;
  int *k = malloc(sizeof(int) * len);
  int j = mid + 1;
  int i = first;
  int t = 0;
  while (i <= mid && j <= end) 
    if (array[i] <= array[j])
      k[t++] = array[i++];
    else
      k[t++] = array[j++];
  while (i <= mid)
    k[t++] = array[i++];
  while(j <= end)
    k[t++]  = array[j++]; 
  t = 0;
  i = first;

  while(t < len)
    array[i++] = k[t++];
  free(k);
}

int main (void) {
  int array[] = {2, 6, 9, 10, 11, 15, 1, 3, 5, 7, 9};
  mergeArray(0, 5, 10, array);
  int i = 0;
  while( i < 11)
    printf("%d\n", array[i++]);
  exit(0);
}

