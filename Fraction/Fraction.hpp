#pragma once

#include <iostream>
#include <compare>

class Fraction {
private:
	int num_, den_;  // Numerator and denominator
	void reduce();   // Helper function to reduce the fraction

public:
	// Constructors
	Fraction(const Fraction& fraction);
	Fraction(const int& num = 0, const int& den = 1);

	// Getters and Setters
	void set_num(const int& num);
	void set_den(const int& den);
	int get_num() const;
	int get_den() const;

	// Overload of assignment operator (=)
	Fraction& operator=(const Fraction& fraction);

	// Arithmetic operators
	Fraction operator+(const Fraction& fraction) const;
	Fraction operator-(const Fraction& fraction) const;
	Fraction operator*(const Fraction& fraction) const;
	Fraction operator/(const Fraction& fraction) const;

	// Arithmetic operators with integers
	Fraction operator+(const int& number) const;
	Fraction operator-(const int& number) const;
	Fraction operator*(const int& number) const;
	Fraction operator/(const int& number) const;

	// Spaceship operator for three-way comparison
	std::strong_ordering operator<=>(const Fraction& fraction) const;

	// Comparison operators
	bool operator==(const Fraction& fraction) const;
	bool operator!=(const Fraction& fraction) const;
	bool operator<(const Fraction& fraction) const;
	bool operator<=(const Fraction& fraction) const;
	bool operator>(const Fraction& fraction) const;
	bool operator>=(const Fraction& fraction) const;

	// Comparison operators with integers
	std::strong_ordering operator<=>(const int& val) const;
	bool operator==(const int& val) const;
	bool operator!=(const int& val) const;
	bool operator<(const int& val) const;
	bool operator<=(const int& val) const;
	bool operator>(const int& val) const;
	bool operator>=(const int& val) const;

	// Stream operators for input/output
	friend std::ostream& operator<<(std::ostream& os, const Fraction& fraction);
	friend std::istream& operator>>(std::istream& is, Fraction& fraction);

	// Conversion to int
	operator int() const;

	// Friend functions for arithmetic with integers on the left side
	friend Fraction operator+(const int& val, const Fraction& frac);
	friend Fraction operator-(const int& val, const Fraction& frac);
	friend Fraction operator*(const int& val, const Fraction& frac);
	friend Fraction operator/(const int& val, const Fraction& frac);
};
