#include <iostream>
using namespace std;
#define TAM 4

/*
 * 17 – Faça uma função que calcule a soma dos elementos
 * da diagonal secundária de uma matriz de inteiros passada
 * como parâmetro e retorne esta soma como resultado. A
 * dimensão da matriz deve ser NxN, onde N é uma constante.
 *
 */

int calculate(int mtz[TAM][TAM]) {
  int i, j, soma = 0;

  for (i = 0; i<TAM; i++) {
    for (j = 0; j<TAM; j++) {
      if (i == j) {
        soma += mtz[i][j];
      }
    }
  }

  return soma;
}

int main() {
  int mtz[TAM][TAM] = {{1,2,3,4},{5,6,2,8},{9,2,22,23},{24,25,26,2}};

  cout << calculate(mtz);

  return 0;
}
