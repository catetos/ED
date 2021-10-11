#include<stdio.h>
#define nums 10 

void Interseccion(int *array, int n) {
  int x,val,y;
  for(x = 1; x < n; x++) {
    val = array[x];
    y = x - 1;
    while (y >= 0 && array[y] > val) {
      array[y + 1] = array[y];
      y--;
    }
    array[y + 1] = val;
  }
}

int main() {

  int vector[nums] = {1,2,6,71,99,0,5,6,26,31};

  Interseccion(vector,nums);
  Print("Isercion",vector,nums);

  return 1;
}