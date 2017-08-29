#include <iostream>
using namespace std;

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