#include <iostream>
using namespace std;

#define TAM 50

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