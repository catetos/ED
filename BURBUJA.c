#include<stdio.h>
#define nums 10 

void Burbuja(int *array, int n) {
  int x,y,t;
  for(x = 1; x < n; x++) {
    for(y = 0; y < n - x; y++) {
      if(array[y] > array[y + 1]) {
        t = array[y];
        array[y] = array[y + 1];
        array[y + 1] = t;
      }
    }
  }
}

int main() {

  int vector[nums] = {1,2,6,71,99,0,5,6,26,31};

  Burbuja(vector,nums);
  Print("Burbuja",vector,nums);

  return 1;
}