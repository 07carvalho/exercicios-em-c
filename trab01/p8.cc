#include <iostream>
using namespace std;
#define TAM 50

/*
 * 8 – Faça uma função que receba como parâmetros um
 * nome e uma letra. A função deve retornar a quantidade de
 * vezes que a letra passada como parâmetro ocorre no nome.
 * Durante a contagem considere que letras maiúsculas e
 * minúsculas são iguais.
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