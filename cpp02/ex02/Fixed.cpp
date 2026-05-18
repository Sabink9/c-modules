#include "Fixed.hpp"

Fixed::Fixed() : value(0)
{
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed& other)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = other;
}

Fixed& Fixed::operator=(const Fixed& other)
{
    std::cout << "Copy assignment operator called" << std::endl;
    value = other.value;
    return *this;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const int n)
{
    std::cout << "Int constructor called" << std::endl;
    value = n << fracBits;
}

Fixed::Fixed(const float n)
{
    std::cout << "Float constructor called" << std::endl;
    value = roundf(n * (1 << fracBits));
}

int Fixed::getRawBits(void) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return value;
}

void Fixed::setRawBits(int const raw)
{
    value = raw;
}

float Fixed::toFloat(void) const
{
    return (float)value / (1 << fracBits);
}

int Fixed::toInt(void) const
{
    return value >> fracBits;
}

std::ostream& operator<<(std::ostream& out, const Fixed& fixed)
{
    out << fixed.toFloat();
    return out;
}

bool Fixed::operator>(const Fixed& other) const { return value > other.value; }
bool Fixed::operator<(const Fixed& other) const { return value < other.value; }
bool Fixed::operator>=(const Fixed& other) const { return value >= other.value; }
bool Fixed::operator<=(const Fixed& other) const { return value <= other.value; }
bool Fixed::operator==(const Fixed& other) const { return value == other.value; }
bool Fixed::operator!=(const Fixed& other) const { return value != other.value; }

Fixed Fixed::operator+(const Fixed& other) const
{
    Fixed result;
    result.value = value + other.value;
    return result;
}

Fixed Fixed::operator-(const Fixed& other) const
{
    Fixed result;
    result.value = value - other.value;
    return result;
}

Fixed Fixed::operator*(const Fixed& other) const
{
    Fixed result;
    result.value = (value * other.value) >> fracBits;
    return result;
}

Fixed Fixed::operator/(const Fixed& other) const
{
    Fixed result;
    result.value = (value << fracBits) / other.value;
    return result;
}

Fixed& Fixed::operator++()
{
    value++;
    return *this;
}

Fixed Fixed::operator++(int)
{
    Fixed tmp(*this);
    value++;
    return tmp;
}

Fixed& Fixed::operator--()
{
    value--;
    return *this;
}

Fixed Fixed::operator--(int)
{
    Fixed tmp(*this);
    value--;
    return tmp;
}

Fixed& Fixed::min(Fixed& a, Fixed& b)
{
    return (a < b) ? a : b;
}

const Fixed& Fixed::min(const Fixed& a, const Fixed& b)
{
    return (a < b) ? a : b;
}

Fixed& Fixed::max(Fixed& a, Fixed& b)
{
    return (a > b) ? a : b;
}

const Fixed& Fixed::max(const Fixed& a, const Fixed& b)
{
    return (a > b) ? a : b;
}