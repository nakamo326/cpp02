#ifndef FIXED_HPP
#define FIXED_HPP

#include <cmath>
#include <iostream>

class Fixed {
  private:
  int m_num;
  static const int m_bp = 8;

  public:
  Fixed();
  Fixed(int num);
  Fixed(float num);
  Fixed(const Fixed &a);
  ~Fixed();
  int getRawBits(void) const;
  void setRawBits(int const raw);
  float toFloat(void) const;
  int toInt(void) const;

  // Assignation operator overload
  Fixed &operator=(const Fixed &a);

  // comparison operator overload
  Fixed &operator>(const Fixed &a);
  Fixed &operator<(const Fixed &a);
  Fixed &operator>=(const Fixed &a);
  Fixed &operator<=(const Fixed &a);
  Fixed &operator==(const Fixed &a);
  Fixed &operator!=(const Fixed &a);

  // arithmetic operator overload
  Fixed &operator+(const Fixed &a);
};

std::ostream &operator<<(std::ostream &stream, const Fixed &value);

#endif