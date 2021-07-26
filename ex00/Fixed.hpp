#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed {
  private:
  int m_num;
  static const int m_bp;

  public:
  Fixed();
  Fixed(const Fixed &a);
  ~Fixed();
  Fixed &operator=(const Fixed &a);
  int getRawBits(void) const;
  void setRawBits(int const raw);
};

#endif