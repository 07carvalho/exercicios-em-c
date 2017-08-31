#include <iostream>
using namespace std;
#define TAM 10

/*
 * 11 – Faça uma função que receba como parâmetro um vetor
 * de inteiros, o número de elementos do vetor e um parâmetro
 * de referencia de valor inteiro delta. A função deve substituir
 * cada elemento do vetor pela diferença entre seu valor
 * original e delta.
 *
 */

void changeArray(int *arr, int tam, int delta) {
  int i;
  for (i = 0; i<tam; i++) {
    arr[i] = arr[i] - delta;
  }
}

int main() {
  int arr[TAM] = {378,28,73,23,82,7,92,34,45,20};
  int delta = 10;
  changeArray(arr, TAM, delta);

  int i;
  for (i = 0; i < TAM; i++) {
    cout << arr[i];
    cout << '\n';
  }
  return 0;
}
