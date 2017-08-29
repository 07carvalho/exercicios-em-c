#include <iostream>
using namespace std;

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