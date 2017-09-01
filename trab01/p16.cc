#include <iostream>
using namespace std;
#define TAM 4

/*
 * 16 – Faça uma função que receba como parâmetro uma
 * matriz quadrada NxN de números inteiros, onde N é uma
 * constante previamente definida, e retorne como resultado o
 * maior elemento da matriz.
 *
 */

int findBigger(int mtz[TAM][TAM]) {
  int i, j, maior = 0;

  for (i = 0; i<TAM; i++) {
    for (j = 0; j<TAM; j++) {
      if (mtz[i][j] > maior) {
        maior = mtz[i][j];
      }
    }
  }

  return maior;
}

int main() {
  int mtz[TAM][TAM] = {{1,2,3,4},{5,6,2,8},{9,2,22,23},{24,25,26,2}};

  cout << findBigger(mtz);

  return 0;
}
