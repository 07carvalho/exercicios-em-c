#include <iostream>
using namespace std;

/*
 * 2 – Faça uma função que receba como parâmetro um vetor
 * de inteiros e seu tamanho. A função deve modificar o vetor
 * de maneira que:
 * a) Elementos com valor original menor ou igual a 0 fiquem
 * com o valor -2 ;
 * b) Elementos cujo valor original (vo) esteja no intervalo (1<=
 * vo <= 5) fiquem com o valor -1;
 * c) Elementos que não sejam enquadrados nos itens a e b
 * recebam o valor 0.
 *
 */

void changeArray(int *arr, int len) {
  int i;
  for (i=0;i<len;i++) {
    if(arr[i] <= 0) {
      arr[i] = -2;
    } else if (arr[i] >= 1 && arr[i] <= 5) {
      arr[i] = -1;
    } else {
      arr[i] = 0;
    }
  }
}

int main() {
  int TAM = 10;
  int arr[TAM] = {-1,0,1,2,3,4,5,6,7,8};
  changeArray(arr, TAM);

  // loop array changed
  int i;
  for (i=0;i<TAM;i++) {
    cout << arr[i];
  }

  return 0;
} 