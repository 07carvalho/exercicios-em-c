#include <iostream>
using namespace std;

/*
 * 1 – Faça uma função que calcule e retorne o produto dos n
 * primeiros números positivos, onde n deve ser passado como
 * parâmetro. Ex.: para n=4, a função deve retornar
 * 4*3*2*1=24. Este valor é conhecido como fatorial de n. Se n
 * não for positivo, a função deve retornar 1.
 *
 */

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