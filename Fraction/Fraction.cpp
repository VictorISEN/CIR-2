#include "Fraction.hpp"
#include <numeric>  // For std::gcd

// Constructors
Fraction::Fraction(const Fraction& fraction) : num_(fraction.num_), den_(fraction.den_) {}
Fraction::Fraction(const int& num, const int& den) : num_(num), den_(den) {
	reduce();
}

// Getters and Setters
void Fraction::set_num(const int& num) { num_ = num; reduce(); }
void Fraction::set_den(const int& den) { den_ = den; reduce(); }
int Fraction::get_num() const { return num_; }
int Fraction::get_den() const { return den_; }

// Helper function to reduce the fraction
void Fraction::reduce() {
	int gcd = std::gcd(num_, den_);
	num_ /= gcd;
	den_ /= gcd;
	if (den_ < 0) {
		num_ = -num_;
		den_ = -den_;
	}
}

// Overload of assignment operator (=)
Fraction& Fraction::operator=(const Fraction& fraction) {
	if (this != &fraction) {
		num_ = fraction.num_;
		den_ = fraction.den_;
	}
	return *this;
}

// Arithmetic operators
Fraction Fraction::operator+(const Fraction& fraction) const {
	return Fraction(num_ * fraction.den_ + fraction.num_ * den_, den_ * fraction.den_);
}

Fraction Fraction::operator-(const Fraction& fraction) const {
	return Fraction(num_ * fraction.den_ - fraction.num_ * den_, den_ * fraction.den_);
}

Fraction Fraction::operator*(const Fraction& fraction) const {
	return Fraction(num_ * fraction.num_, den_ * fraction.den_);
}

Fraction Fraction::operator/(const Fraction& fraction) const {
	return Fraction(num_ * fraction.den_, den_ * fraction.num_);
}

// Arithmetic operators with integers
Fraction Fraction::operator+(const int& number) const {
	return *this + Fraction(number);
}

Fraction Fraction::operator-(const int& number) const {
	return *this - Fraction(number);
}

Fraction Fraction::operator*(const int& number) const {
	return *this * Fraction(number);
}

Fraction Fraction::operator/(const int& number) const {
	return *this / Fraction(number);
}

// Spaceship operator
std::strong_ordering Fraction::operator<=>(const Fraction& fraction) const {
	int left = num_ * fraction.den_;
	int right = fraction.num_ * den_;
	return left <=> right;
}

// Comparison operators
bool Fraction::operator==(const Fraction& fraction) const {
	return (num_ == fraction.num_) && (den_ == fraction.den_);
}

bool Fraction::operator!=(const Fraction& fraction) const {
	return !(*this == fraction);
}

bool Fraction::operator<(const Fraction& fraction) const {
	return (*this <=> fraction) == std::strong_ordering::less;
}

bool Fraction::operator<=(const Fraction& fraction) const {
	return (*this <=> fraction) != std::strong_ordering::greater;
}

bool Fraction::operator>(const Fraction& fraction) const {
	return (*this <=> fraction) == std::strong_ordering::greater;
}

bool Fraction::operator>=(const Fraction& fraction) const {
	return (*this <=> fraction) != std::strong_ordering::less;
}

// Comparison operators with integers
std::strong_ordering Fraction::operator<=>(const int& val) const {
	return *this <=> Fraction(val);
}

bool Fraction::operator==(const int& val) const {
	return *this == Fraction(val);
}

bool Fraction::operator!=(const int& val) const {
	return !(*this == val);
}

bool Fraction::operator<(const int& val) const {
	return (*this <=> val) == std::strong_ordering::less;
}

bool Fraction::operator<=(const int& val) const {
	return (*this <=> val) != std::strong_ordering::greater;
}

bool Fraction::operator>(const int& val) const {
	return (*this <=> val) == std::strong_ordering::greater;
}

bool Fraction::operator>=(const int& val) const {
	return (*this <=> val) != std::strong_ordering::less;
}

// Stream operators
std::ostream& operator<<(std::ostream& os, const Fraction& fraction) {
	os << fraction.num_ << '/' << fraction.den_;
	return os;
}

std::istream& operator>>(std::istream& is, Fraction& fraction) {
	char slash;
	is >> fraction.num_ >> slash >> fraction.den_;
	fraction.reduce();
	return is;
}

// Conversion to int
Fraction::operator int() const {
	return num_ / den_;
}

// Friend functions for arithmetic with integers on the left side
Fraction operator+(const int& val, const Fraction& frac) {
	return Fraction(val) + frac;
}

Fraction operator-(const int& val, const Fraction& frac) {
	return Fraction(val) - frac;
}

Fraction operator*(const int& val, const Fraction& frac) {
	return Fraction(val) * frac;
}

Fraction operator/(const int& val, const Fraction& frac) {
	return Fraction(val) / frac;
}
