#include <iostream>
using namespace std;

void changeArray(int *arr, int len) {
  int i, tmp;
  for (i=0;i<len/2;i++) {
    tmp = arr[i];
    arr[i] = arr[len-i-1];
    arr[len-i-1] = tmp;
  }
}

int main() {
  int TAM = 10;
  int arr[TAM] = {0,1,2,3,4,5,6,7,8,9};
  changeArray(arr, TAM);

  // loop array changed
  int i;
  for (i=0;i<TAM;i++) {
    cout << arr[i];
  }

  return 0;
} 