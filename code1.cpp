#include <iostream>
#include <cstdlib>   // for EXIT_SUCCESS
using std::cout;
using std::cin;
using std::endl;

int Fib(int n);

int Fact(int n);

int main() {
  int x;
  
  cout << "How many Fibonacci Numbers do you want? ";
  cin  >> x;
  cout << "First " << x << " Fibonacci Numbers: " << Fib(x - 1) << endl;
  
  return EXIT_SUCCESS;
}

int Fib(int n) {
  if (n <= 1) {
    return n;
  } else {
    int num1 = 0, num2 = 1, sum;
    for (int i = 2; i <= n; ++i) {
      sum = num1 + num2;
      num1 = num2;
      num2 = sum;
    }
    return num2;
  }
}

int Fact(int n) {
  if (n == 1)
    return 1;
  else
    return n * Fact(n-1);
}
