#include <iostream>
using namespace std;
#define TAM 50

/*
 * 9 – Faça uma função que receba como parâmetro um nome
 * e retorne verdadeiro caso o nome seja um palíndromo,
 * retornando falso em caso contrário.
 *
 */

int searchLetter(char *name, char letter) {
  int i, count=0;

  for (i=0;i<TAM;i++) {
    if (name[i] == letter) {
      count++;
    }
  }

  return count;
}

int main() {
  char name[TAM];
  char letter;
  cout << "Insira um nome: ";
  cin >> name;
  cout << "Insira uma letra: ";
  cin >> letter;
  cout << searchLetter(name, letter);
  return 0;
}