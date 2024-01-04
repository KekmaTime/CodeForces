#include <iostream>

int main() {
  int n, m;
  std::cin >> n >> m;
  if (n % 2 == 0) {
    std::cout << m * (n / 2) << std::endl;
  } else {
    std::cout << (m * (n / 2) + m / 2) << std::endl;
  }
  return 0;
}
