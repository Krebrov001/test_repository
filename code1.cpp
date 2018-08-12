#include <iostream>

int Fib(int n) {
  if (n <= 1)
    return n;
  else
    return Fib(n-1) + Fib(n-2);
}

int main() {
  std::cout << "First 10 Fibonacci Numbers: " << Fib(9) << std::endl;
}
