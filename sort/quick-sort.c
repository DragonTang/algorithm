void quickSort (int *array, int left, int right) {
  if (left >= right) return;
  int key = array[left];
  int j = right;
  int i = left;
  while (i < j) {
    while (i < j && array[j] >= key)
      j--;
    if (i != j)
      array[i] = array[j];
    while (i < j && array[i] <= key)
      i++;
    if (i != j)
      array[j] = array[i];
  }
  if (i != left)
    array[i] = key;
  quickSort(array, left, i - 1);
  quickSort(array, i + 1, right);
}
