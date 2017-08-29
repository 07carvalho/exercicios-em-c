#include <iostream>
using namespace std;

bool verifyArray(int *arr, int len) {
  int i;
  bool result = true;

  for (i=0;i<len-1;i++) {
    if (arr[i] > arr[i+1]) {
      result = false;
    }
  }

  return result;
}

int main() {
  int TAM = 10;
  bool result;
  int vetor[TAM] = {1,2,3,4,6,5,7,8,9,10}; // nao esta em ordem crescente
  result = verifyArray(vetor, TAM);
  cout << result;
  return 0;
} 