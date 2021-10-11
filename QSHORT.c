#include<stdio.h>
#define nums 10 

void QuickSort(int *array, int inicio, int final) {
  int i = inicio, f = final, tmp;
  int x = array[(inicio + final) / 2];
  do {
    while(array[i] < x && f <= final) {
      i++;
    }
    while(x < array[f] && f > inicio) {
      f--;
    }
    if(i <= f) {
      tmp = array[i];
      array[i] = array[f];
      array[f] = tmp;
      i++; f--;
    }
  } while(i <= f);

  if(inicio < f) {
    QuickSort(array,inicio,f);
  }

  if(i < final){
    QuickSort(array,i,final);
  }

}

int main() {

  int vector[nums] = {1,2,6,71,99,0,5,6,26,31};

  QuickSort(vector,0,nums - 1);
  Print("QuickSort",vector,nums);

  return 1;
}