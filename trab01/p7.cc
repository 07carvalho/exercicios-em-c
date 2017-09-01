#include <iostream>
using namespace std;

/*
 * 7 – Faça uma função que receba como parâmetro um inteiro
 * N e retorne a soma dos quadrados de todos os números
 * inteiros positivos de valor menor ou igual a N. Calcule
 * interativamente, sem usar a fórmula para calcular o valor.
 *
 */

int sumSquare(int num) {
  int i, sum;

  for (i=0;i<=num;i++) {
    sum += (i*i);
  }

  return sum;
}

int main() {
  int num;
  cin >> num;
  cout << sumSquare(num);
  return 0;
}