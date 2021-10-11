#include<stdio.h>
#define nums 10 

void Selection(int *array, int n) {
  int x, y, min, tmp;
  for(x = 0; x < n; x++) {
    min = x;
    for(y = x + 1; y < n; y++) {
      if(array[min] > array[y]) {
        min = y;
      }
    }
    tmp = array[min];
    array[min] = array[x];
    array[x] = tmp;
  }
}

int main() {

  int vector[nums] = {1,2,6,71,99,0,5,6,26,31};

  Selection(vector,nums);
  Print("SelectionSort",vector,nums);

  return 1;
}