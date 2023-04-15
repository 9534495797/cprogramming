#include <stdio.h>

int main() {
  int arr[] = {1, 2, 3, 4, 5};
  int len = sizeof(arr) / sizeof(arr[0]);
  int product = 1;

  for (int i = 0; i < len; i++) {
    product *= arr[i];
  }

  printf("Product of array: %d\n", product);

  return 0;
}

