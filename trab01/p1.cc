#include <iostream>
using namespace std;

int calculate(int num) {
  int result=1;

  if (num > 0) {
    while(num>0) {
      result = result * num;
      num--;
    }
  }
  return result;
}

int main() {
  int input;
  cin >> input;
  cout << calculate(input);
  return 0;
} 