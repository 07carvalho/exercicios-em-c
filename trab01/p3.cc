#include <iostream>
using namespace std;

/*
 * 3 - Faça uma função que receba como parâmetro um vetor
 * com n inteiros e inverta as posições dos elementos de
 * maneira que o primeiro elemento troque de valor com o
 * último, o segundo com o penúltimo e assim por diante.
 * (inverter as posições dos elementos do vetor)
 *
 */

void changeArray(int *arr, int len) {
  int i, tmp;
  for (i=0;i<len/2;i++) {
    tmp = arr[i];
    arr[i] = arr[len-i-1];
    arr[len-i-1] = tmp;
  }
}

int main() {
  int TAM = 10;
  int arr[TAM] = {0,1,2,3,4,5,6,7,8,9};
  changeArray(arr, TAM);

  // loop array changed
  int i;
  for (i=0;i<TAM;i++) {
    cout << arr[i];
  }

  return 0;
} 