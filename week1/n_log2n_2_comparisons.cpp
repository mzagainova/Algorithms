#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int findMaxRecursive(int i, int j, int a[]){
  if(i == j){
    return a[i];
  }
  int max1 = findMaxRecursive(i, i + (j-i)/ 2, a);
  int max2 = findMaxRecursive(1 + i + (j-i)/2, j, a);

  if(max1 > max2){
    return max1;
  }
  return max2;
}

int main(void){
  int a[5] = {2,33,40,5,1};

  int result = findMaxRecursive(0,4,a);

  cout << "RESULT: " << result << endl;
}
