#include <iostream>
using namespace std;
#define TAM 10

/*
 * 12 – Faça uma função que receba como parâmetro um vetor
 * de inteiros ordenado de forma crescente e o número de
 * elementos do vetor. A função deve substituir cada elemento
 * do vetor pela diferença entre seu valor original e o valor da
 * posição imediatamente anterior a ele, mantendo apenas o
 * primeiro elemento com seu valor original.
 *
 */

void changeArray(int *arr, int tam) {
  int i;
  for (i = 1; i<tam; i++) {
    arr[i] = arr[i] - arr[i-1];
  }
}

int main() {
  int arr[TAM] = {3,12,23,24,45,55,63,72,78,82};
  changeArray(arr, TAM);

  int i;
  for (i = 0; i < TAM; i++) {
    cout << arr[i];
    cout << '\n';
  }
  return 0;
}
