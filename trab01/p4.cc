#include <iostream>
using namespace std;

bool verifyTxt(char *arr, int len) {
  int i;

  for (i=0;i<len-3;i++) {
    if (arr[i] == 'U' && arr[i+1] == 'F' && arr[i+2] == 'A' && arr[i+3] == 'M') {
      return true;
    }
  }

  return false;
}

int main() {
  int TAM = 40;
  bool result;
  char texto[TAM] = "eu estudo na UFAM, Universidade Federal";
  result = verifyTxt(texto, TAM);
  cout << result;
  return 0;
} 