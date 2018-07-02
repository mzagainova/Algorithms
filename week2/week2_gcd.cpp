#include <iostream>
using namespace std;

int gcd(int a, int b){
  if(b == 0){
    return a;
  }
  int aPrime = b % a;
  return gcd(b, aPrime);
}

int main(void){
  int i, j;

  cout << "Enter number 1: ";
  cin >> i;
  cout << "Enter number 2: ";
  cin >> j;

  int x = gcd(i, j);
  cout << "GCD of " << i << " and " << j << ": " << x << endl;
}
