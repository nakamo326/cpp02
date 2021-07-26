#ifndef FIXED_HPP
#define FIXED_HPP

#include <cmath>
#include <iostream>

class Fixed {
  private:
  int m_num;
  static const int m_bp;

  public:
  Fixed();
  Fixed(int num);
  Fixed(float num);
  Fixed(const Fixed &a);
  ~Fixed();
  Fixed &operator=(const Fixed &a);
  int getRawBits(void) const;
  void setRawBits(int const raw);
  float toFloat(void) const;
  int toInt(void) const;
};

std::ostream &operator<<(std::ostream &stream, const Fixed &value);

#endif