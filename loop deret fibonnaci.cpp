#include <iostream>
using namespace std;
int fibonacci(int n) {
  if (n == 0 || n ==1){
    return n;
  } else {
    return (fibonacci(n-1) + fibonacci(n-2));
  }
}
int main() {
  
  int  i, j = 0;
 
  cout << "Hasil bilangan fibonacci: \n";
  for (i = 1; i <= 10; i++){
    cout << fibonacci(j) << endl;
    j++;
  }
  return 0;
}
