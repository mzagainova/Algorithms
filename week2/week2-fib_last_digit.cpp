#include <iostream>
#include <vector>
using namespace std;

int fibLastDigit(int n){
  vector<int> v;
  v.push_back(1);
  v.push_back(1);

  int i;
  for(i = 2; i < n; i++){
    v.push_back((v[i-2] + v[i-1]) % 10);
  }
  return v[i-1];
}

int main(void){
  int i;

  cout << "Enter number: " << endl;
  cin >> i;
  int j = fibLastDigit(i);
  cout << "Fib of " << i << " " << j << endl;
}
