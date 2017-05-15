void insertSort (int array[], int size) {
  int i, tmp, p;
  for (i = 1; i < size; i++) {
    tmp = array[i];
    p = i;
    while (p > 0 && tmp < array[ p - 1]) {
      array[p] = array[p - 1];
      --p;
    }
    array[p] = tmp;
  }
}
