#include <iostream>
#include <math.h>
using namespace std;
#define TAM 10

/*
 * 18 – Faça uma função para que receba como parâmetro um
 * vetor de inteiros com n elementos e retorne o desvio padrão
 * dos valores do vetor. Encontrar a fórmula para o desvio
 * padrão faz parte do exercício.
 *
 */

float calculate(int *arr) {
  int i, j, media = 0, soma = 0;

  for (i = 0; i<TAM; i++) {
    media += arr[i];
  }
  media = media/TAM;

  for (i = 0; i<TAM; i++) {
    soma += (arr[i] - media) * (arr[i] - media);
  }

  int variancia = soma/TAM;

  return sqrt(variancia);
}

int main() {
  int arr[TAM] = {4,5,6,2,8,9,12,1,13,14};

  cout << calculate(arr);

  return 0;
}
