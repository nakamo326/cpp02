#include <iostream>

#include "Fixed.hpp"

int main(void) {
  Fixed a;

  std::cout << "[0] " << a << std::endl;
  std::cout << "[1] " << ++a << std::endl;
  std::cout << "[2] " << a << std::endl;
  std::cout << "[3] " << a++ << std::endl;
  std::cout << "[4] " << a << std::endl;
  std::cout << "[5] " << --a << std::endl;
  std::cout << "[6] " << a << std::endl;
  std::cout << "[7] " << a-- << std::endl;
  std::cout << "[8] " << a << std::endl;

  Fixed b(Fixed(5.05f) * Fixed(2));
  std::cout << b << std::endl;
  Fixed c(Fixed(10.0f) / Fixed(4));
  std::cout << c << std::endl;

  // std::cout << Fixed::max(a, b) << std::endl;

  return 0;
}
