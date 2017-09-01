#include <iostream>
using namespace std;
#define TAM 4

/*
 * 15 - Faça uma função que receba como parâmetro uma
 * matriz quadrada NxN de números inteiros, onde N é uma
 * constante previamente definida, e um número inteiro K. A
 * função deve retornar verdadeiro caso a matriz contenha
 * exatamente quatro posições com valor K e falso em caso
 * contrário.
 *
 */

bool findKey(int mtz[TAM][TAM], int key) {
  int i, j, count = 0;
  for (i = 0; i<TAM; i++) {
    for (j = 0; j<TAM; j++) {
      if (mtz[i][j] == key) {
        count++;
      }
    }
  }

  if (count == 4) {
    return true;
  }
  return false;
}

int main() {
  int mtz[TAM][TAM] = {{1,2,3,4},{5,6,2,8},{9,2,22,23},{24,25,26,2}};
  int key = 2;
  cout << findKey(mtz, key);

  return 0;
}
